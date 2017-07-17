import matplotlib as mpl
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.cbook as cbook
import math, random, csv

x = []
aPriori = []
aPosteriori = []
tecNecesaria = []
usoPC = []
sabesRobotica = []
usoRobot = []
lines = []

for i in range(1,18):
	x.append(i)
with open('resul.csv', 'r') as csvfile:
	reader = csv.reader(csvfile, delimiter=',')	
	rows = list(reader)
	
	cont=0
	for row in rows:
		if cont > 0 and cont<=12:
			tecNecesaria.append(row[5])
			usoPC.append(row[7])
			sabesRobotica.append(row[8])
			usoRobot.append(row[9])
			aPriori.append(row[10])			
			aPosteriori.append(row[13])
		elif cont > 12 and cont <=17:
			tecNecesaria.append(row[5])
			usoPC.append(row[7])
			sabesRobotica.append(row[8])
			usoRobot.append(row[9])
			aPriori.append(row[10])			
			aPosteriori.append(row[17])
		cont += 1
		

#line1 = [aPriori[0],aPosteriori[0]]


fig = plt.figure()

#avgError = 0
#for i in range(0,len(errors)):
	#avgError += errors[i]
#avgError = avgError / len(errors)

#varError = 0
#for i in range(0,len(errors)):
	#print "error: "+str(errors[i])
	#varError += ((errors[i]-avgError) ** 2)
#varError = varError / len(errors)

#print "Numero de muestras: " +str(len(errors))
#print "Media " + str(avgError)
#print "Varianza "+str(varError)
#print "Desv tipica "+ str(math.sqrt(varError))

#ax1 = fig.add_subplot(111)
#ax1.set_title('Before')    
#ax1.set_xlabel('Student')
#ax1.set_ylabel('Difficult')
#leg1 = ax1.legend()

#ax2 = fig.add_subplot(111)
#ax2.set_title('After')    
#leg2 = ax2.legend()


#plt.plot(x,aPriori, 'bo', x,aPriori,'b:')#, '--')
#plt.plot(x,aPosteriori,'gD', x,aPosteriori,'g:')#, '--')
#plt.title('Programming a Robot')
#plt.ylim([0,7.3])
#plt.xticks(np.arange(0, len(x)+1, 1.0))
#plt.show()

#colors = ['yellow','green', 'orange', 'lightskyblue', 'lightcoral', 'blue', 'red']
#elements = [0,0,0,0,0,0,0]
#labels = '1','2','3','4','5','6','7'
#explode = (0, 0, 0, 0, 0, 0, 0) # only "explode" the 2nd slice (i.e. 'Hogs')


#for element in tecNecesaria:
	#elements[int(element)-1] += 1

#acum = 0
#for element in elements:
	#acum += int(element)

#sizes = []
#for element in elements:
	#sizes.append(element/float(acum)*100)

#for element in sizes:
	#print element
#plt.pie(sizes, explode=explode, labels=labels, colors=colors,autopct='%1.1f%%', shadow=True, startangle=90)
#plt.show()



colors = ['yellow','red', 'orange', 'lightskyblue', 'lightcoral', 'blue', 'green']
#colors = colors[::-1]
#colors = ['lightcoral', 'blue', 'green', 'silver', 'yellow', 'pink', 'brown']
elements = [0,0,0,0,0,0,0]
labels = '1','2','3','4','5','6','7'
explode = (0, 0, 0, 0, 0, 0, 0) # only "explode" the 2nd slice (i.e. 'Hogs')

for element in usoPC:
	elements[int(element)-1] += 1

acum = 0
for element in elements:
	acum += int(element)

sizes = []
for element in elements:
	sizes.append(element/float(acum)*100)

plt.pie(sizes, explode=explode, labels=labels, colors=colors,autopct='%1.1f%%', shadow=True, startangle=90)
plt.title('Use of Computer')
plt.show()

