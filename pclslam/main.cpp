int
main (int argc,
char **argv)
{
    PCL_INFO ("Syntax: %s -input_dir <dir_with_pcds> -output_dir <dir_with_resulting_transforms>\n", argv[0]);
    /// Get the pcd file list from a folder
    std::string input_dir = "";
    console::parse_argument (argc, argv, "-input_dir", input_dir);
    std::string output_dir = "";
    console::parse_argument (argc, argv, "-output_dir", output_dir);
    if (input_dir == "" || output_dir == "")
    {
        PCL_ERROR ("Syntax error!\n");
        return (-1);
    }
    std::vector<std::string> input_pcd_files;
    getFilesFromDirectory (input_dir, ".PCD", input_pcd_files);
    PCL_INFO ("Processing %zu files ...\n", input_pcd_files.size ());
    CompleteGraphGeometricRegistration<PointXYZ> complete_registration;
    /// Load files one by one and add them to the CompleteGraphGeometricRegistration instance
    for (size_t cloud_i = 0; cloud_i < input_pcd_files.size (); ++cloud_i)
    {
        PCL_INFO (">
        Reading in cloud %s\n", input_pcd_files[cloud_i].c_str ());
        PointCloud<PointXYZ>::Ptr cloud_in (new PointCloud<PointXYZ> ());
        io::loadPCDFile (input_pcd_files[cloud_i], *cloud_in);
        complete_registration.addNewPointCloud (cloud_in);
    }

    /// Get the transforms and write them to the corresponding files
    /// Strip the base names and add the output folder name and the .transform extension
    std::map<size_t, Eigen::Matrix4d> transforms;
    complete_registration.getTransforms (transforms);
    /// Create output dir first
    boost::filesystem::create_directory (output_dir);
    for (std::map<size_t, Eigen::Matrix4d>::const_iterator t_it = transforms.begin ();
        t_it != transforms.end (); ++t_it)
    {
        std::string transform_name = output_dir + "/" + af::getBaseName (input_pcd_files[t_it->first]) + ".transform";
        saveTransform (transform_name, t_it->second);
    }
    /// Save keyframe transformations separately
    boost::filesystem::create_directory (output_dir + "/keyframes");
    std::map<size_t, Eigen::Matrix4d> keyframe_transforms;
    complete_registration.getKeyframeTransforms (keyframe_transforms);
    for (std::map<size_t, Eigen::Matrix4d>::const_iterator t_it = keyframe_transforms.begin ();
        t_it != keyframe_transforms.end (); ++t_it)
    {
        std::string transform_name = output_dir + "/keyframes/" + af::getBaseName (input_pcd_files[t_it->first]) + ".transform";
        saveTransform (transform_name, t_it->second);
    }
    return (0);
}