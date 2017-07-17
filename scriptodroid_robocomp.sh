### LOGIN ###
#username: odroid
#password: odroid

### SETUP UBUNTU ###
sudo apt-get update
sudo apt-get remove abiword abiword-common abiword-plugin-grammar abiword-plugin-mathview audacious audacious-plugins audacious-plugins-data blueman consolekit desktop-base docbook-xml ffmpegthumbnailer fonts-lyx galculator gdebi gdebi-core gecko-mediaplayer giblib1 gksu gnome-desktop-data gnome-icon-theme-full gnome-mplayer gnome-system-tools gnome-themes-standard gnome-themes-standard-data gnumeric gnumeric-common gnumeric-doc gpicview gtk2-engines gtk2-engines-pixbuf guvcview hardinfo indicator-application-gtk2 leafpad liba52-0.7.4 libaacs0 libabiword-3.0 libass4 libaudclient2 libaudcore1 libavcodec54 libavformat54 libavresample1 libavutil52 libbinio1ldbl libbluray1 libbs2b0 libcairo-perl libcddb2 libchamplain-0.12-0 libchamplain-gtk-0.12-0 libck-connector0 libcompfaceg1 libcue1 libdca0 libdirectfb-1.2-9 libdiscid0 libdvdnav4 libdvdread4 libenca0 libencode-locale-perl libept1.4.12 libexo-1-0 libexo-common libexo-helpers libfaad2 libffmpegthumbnailer4 libfile-listing-perl libfluidsynth1 libfm-data libfm-extra4 libfm-gtk-data libfm-gtk4 libfm-modules libfm4 libfont-afm-perl libgda-5.0-4 libgda-5.0-common libgdome2-0 libgdome2-cpp-smart0c2a libgif4 libgksu2-0 libglib-perl libgmlib1 libgmtk1 libgmtk1-data libgoffice-0.10-10 libgoffice-0.10-10-common libgsf-1-114 libgsf-1-common libgsm1 libgtk2-perl libgtkmathview0c2a libgtkspell0 libguess1 libhtml-form-perl libhtml-format-perl libhtml-parser-perl libhtml-tagset-perl libhtml-tree-perl libhttp-cookies-perl libhttp-daemon-perl libhttp-date-perl libhttp-message-perl libhttp-negotiate-perl libid3tag0 libimlib2 libindicator7 libio-html-perl libjs-jquery liblink-grammar4 libloudmouth1-0 liblwp-mediatypes-perl liblwp-protocol-https-perl libmad0 libmenu-cache-bin libmenu-cache3 libmms0 libmodplug1 libmowgli2 libmp3lame0 libmpg123-0 libmusicbrainz3-6 libnet-dbus-perl libnet-http-perl libobrender29 libobt2 libonig2 liboobs-1-5 libopenjpeg2 libopts25 libopus0 libots0 libpam-ck-connector libpango-perl libpisock9 libpostproc52 libquvi-scripts libquvi7 librarian0 libschroedinger-1.0-0 libsdl1.2debian libsidplayfp libswscale2 libtidy-0.99-0 libtie-ixhash-perl libts-0.0-0 libuniconf4.6 libva1 libvdpau1 libvte-common libvte9 libwebcam0 libwv-1.2-4 libwvstreams4.6-base libwvstreams4.6-extras libwww-perl libwww-robotrules-perl libx264-142 libxfce4ui-1-0 libxfce4ui-common libxfce4util-bin libxfce4util-common libxfce4util6 libxfconf-0-2 libxml-parser-perl libxml-twig-perl libxml-xpathengine-perl libxvidcore4 light-locker light-locker-settings lightdm-gtk-greeter link-grammar-dictionaries-en lm-sensors lubuntu-artwork lubuntu-artwork-14-04 lubuntu-core lubuntu-default-session lubuntu-default-settings lubuntu-desktop lubuntu-icon-theme lubuntu-lxpanel-icons lubuntu-software-center lxappearance lxappearance-obconf lxinput lxlauncher lxmenu-data lxpanel lxpanel-indicator-applet-plugin lxrandr lxsession lxsession-data lxsession-default-apps lxsession-logout lxshortcut lxtask lxterminal mplayer2 mtpaint ntp obconf openbox pcmanfm pidgin pidgin-data pidgin-libnotify plymouth-theme-lubuntu-logo plymouth-theme-lubuntu-text python-gudev python-psutil python-pysqlite2 rarian-compat scrot sgml-data sylpheed sylpheed-doc sylpheed-i18n sylpheed-plugins synaptic system-tools-backends transmission tsconf uvcdynctrl uvcdynctrl-data wvdial xfburn xfce4-notifyd xfce4-power-manager xfce4-power-manager-data xfconf xfonts-100dpi xpad evince camorama simple-scan medit firefox && sudo apt-get install lxde gedit build-essential checkinstall cmake cmake-curses-gui pkg-config chromium-browser gparted wicd guvcview openssh-server xdm git

### UPDATE LINUX ###
sudo apt-get update && sudo apt-get dist-upgrade && sudo apt-get upgrade
sudo apt-get autoremove

### CONFIGURE LXDE ###
#1. Resize partition to 7168 MB with gparted, add temporary 1024 MB linux-swap partition and set "swapon"
#2. Open wicd, properties menu, general settings. Enter 'wlan0' under Wireless interface
#3. Check wifi using wicd
#4. Set background to solid color
#5. Remove logout application launch bar (lower right corner)
#6. Set taskbar icons (pcmanfm, lxterminal, chromium, wicd)
#7. Disable screensaver

### FIX LOGOUT GUI PERMISSION BUG (https://tracker.zentyal.org/issues/360) ###
sudo apt-get install systemd-shim
sudo echo "session required pam_systemd.so" >> /etc/pam.d/lxdm


### FIX WAITING FOR NETWORK CONFIGURATION BUG ###
#1. Edit network interfaces file (sudo gedit /etc/network/interfaces), replace with the following
#auto lo
#iface lo inet loopback
#session required pam_systemd.so


### ENABLE CHROMIUM GPU ACCELERATION (C1 ONLY) ###
#1. Run chromium
#2. Enter about:flags as URL
#3. Disable Override software rendering list (1st one)
#4. Close the browser
#5. Run the chromium with "chromium-browser --use-gl=egl"
#6. Enter about:gpu as URL



### INSTALL OPENCV DEPENDENCIES ###
sudo apt-get install build-essential checkinstall cmake pkg-config yasm libtiff4-dev libjpeg-dev libjasper-dev libavcodec-dev libavformat-dev libswscale-dev libdc1394-22-dev libxine-dev libgstreamer0.10-dev libgstreamer-plugins-base0.10-dev libv4l-dev python-dev python-numpy libqt4-dev libgtk2.0-dev libavcodec-dev libavformat-dev libswscale-dev libtbb2 libtbb-dev

### GET OPENCV SOURCE ###
cd ~
wget http://sourceforge.net/projects/opencvlibrary/files/opencv-unix/2.4.9/opencv-2.4.9.zip
unzip opencv-2.4.9.zip
rm opencv-2.4.9.zip
cd opencv-2.4.9

### BUILD AND INSTALL FFMPEG (http://forum.odroid.com/viewtopic.php?t=669)
cd ~
apt-get purge ffmpeg && apt-get build-dep ffmpeg
wget http://ffmpeg.org/releases/ffmpeg-1.1.3.tar.gz
tar zxvf ffmpeg-1.1.3.tar.gz
cd ffmpeg-1.1.3
./configure --enable-nonfree --enable-thumb --enable-neon
make -j5
sudo apt-get install checkinstall
sudo checkinstall
ffplay -h | head -n 5

### BUILD AND INSTALL OPENCV ###
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=RELEASE -DCMAKE_INSTALL_PREFIX=/usr/local -DWITH_OPENGL=ON -DWITH_V4L=ON -DWITH_TBB=ON -DBUILD_TBB=ON -DENABLE_VFPV3=ON -DENABLE_NEON=ON ..
make
sudo make install

### INSTALL OPENNI (https://github.com/cmcmurrough/OpenNI2) ###
cd ~
sudo apt-get install -y g++ python libusb-1.0-0-dev libudev-dev openjdk-6-jdk freeglut3-dev doxygen graphviz
git clone https://github.com/cmcmurrough/OpenNI2
cd OpenNI2
PLATFORM=Arm make
cd Packaging
python ReleaseVersion.py Arm
mv Final/OpenNI-Linux-Arm-2.2.tar.bz2 ~
cd ~
tar -xvf OpenNI-Linux-Arm-2.2.tar.bz2
rm -rf OpenNI2
rm OpenNI-Linux-Arm-2.2.tar.bz2
cd OpenNI-Linux-Arm-2.2
sudo sh install.sh

### INSTALL PCL DEPENDENCIES ###
sudo apt-get install freeglut3-dev libboost-all-dev libeigen3-dev libflann-dev libvtk5-dev libusb-1.0-0-dev libqhull-dev

### GET PCL SOURCE (RELEASE 1.7.2) ###
cd ~
git clone https://github.com/PointCloudLibrary/pcl pcl-1.7.2
cd pcl-1.7.2

### BUILD AND INSTALL PCL (requires 1GB temporary swap file) ###
mkdir build
cd build
cmake -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local ..
make
sudo make install

### GET ODROID-DEVELOPMENT EXAMPLES ###
cd ~
git clone https://github.com/cmcmurrough/odroid-development.git





### INSTALL ROBOCOMP (http://wiki.ros.org/indigo/Installation/UbuntuARM) ###

# by RoboLab, ISIS and many other collaborators.

# RoboComp is an open-source Robotics framework providing the tools to create and modify software components that communicate through public interfaces.
# Components may require, subscribe, implement or publish interfaces in a seamless way. Building new components is done using two domain specific languages,
# IDSL and CDSL. With IDSL you define an interface and with CDSL you specify how the component will communicate with the world. With this information,
# a code generator creates C++ and/or Python sources, based on CMake, that compile and execute flawlessly. When some of these features have to be changed,
# the component can be easily regenerated and all the user specific code is preserved thanks to a simple inheritance mechanism.


sudo apt-get update
sudo apt-get install git git-annex cmake g++ libgsl0-dev libopenscenegraph-dev cmake-qt-gui zeroc-ice35 freeglut3-dev libboost-system-dev libboost-thread-dev qt4-dev-tools yakuake openjdk-7-jre python-pip  python-pyparsing python-numpy python-pyside pyside-tools libxt-dev pyqt4-dev-tools qt4-designer


cd ~
git clone https://github.com/robocomp/robocomp.git
sudo ln -s /home/odroid /home/robocomp

echo "export ROBOCOMP=/home/odroid/robocomp" >> ~/.bashrc
echo "export PATH=$PATH:/opt/robocomp/bin" >> ~/.bashrc
source ~/.bashrc

cd robocomp
mkdir build
cd build
cmake ..
make
sudo make install

sudo echo "/opt/robocomp/lib/" >>  /etc/ld.so.conf

sudo ldconfig




# Installing some RoboLab's components from GitHub

# The software of the robots using RoboComp is composed of different software components working together, communicating among them. What we just installed is
# just the core of RoboComp (the simulator, a component generator and some libraries). To have other features like joystick control we have to run additional 
# software components available from other repositories, for example robocomp-robolab:


cd ~/robocomp/components
git clone https://github.com/robocomp/robocomp-robolab.git



#######################################
###  EXAMPLE Connecting a JoyStick  ###
#######################################

# If you have a joystick around, connect it to the USB port and:

# cd ~/robocomp/components/robocomp-robolab/components/joystickComp
# cmake .
# make
# cd bin
# sudo addgroup your-user dialout   // To solve some permissions issues in Ubuntu
# ./startJoyStick.sh 

# Your joystick should be now running. It will make the robot advance and turn at your will. If the component does not start or the robot does not move stop joystickcomp with:

# ./forceStopJoyStickComp.sh

# and check where the joystick device file has been created (e.g., /dev/input/js0). If it is not /dev/input/js0, edit ~/robocomp/components/robocomp-robolab/components/joystickComp/etc/config change it accordingly and restart. Note that you might want to save the config file to the component's home directory so it does not interfere with future github updates.

# You can find more tutorials on RoboComp in tutorials!

# Drop comments and ask questions in:

#     https://groups.google.com/forum/?hl=es#!forum/robocomp-dev
#     https://gitter.im/robocomp

# Please, report any bugs to pbustos@unex.es