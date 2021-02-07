#!/usr/bin/bash
#Shell program to download a webpage, given url. And analyse performance.

URL=https://www.geeksforgeeks.org/device-driver-and-its-purpose/

# wget output file
FILE=downloadlink.out 
FILE1=time.txt

# wget log file
LOGFILE=mydownload.log
echo `date` >> $FILE1
echo "Webpage downloaded : $URL" >> $FILE1

#to determine how long the command wget takes to run 
{ time(wget -U Mozilla/5.0 $URL -O $FILE -a $LOGFILE) ; } 2>> $FILE1  #wget to download the webpage

