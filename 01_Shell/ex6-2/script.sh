#!/bin/sh
mkdir exer6 log ws
cd exer6
touch a.c b.c c.c a.txt
echo '\n'Creation of folders and files was successful'\n'

log_file=../log/exer6.log
printf "*** Log File ***"'\n' > $log_file
echo '\n'Creation of log file was successful'\n'

i=0
read -p "How many times do you want to backup your files ?" choice

while [ $i -ne $choice ]
do  
    counter=$((i + 1))
    echo '\n'Backup files number $counter >> $log_file
    for file in *.c
        do
        cp -v $file ../ws
    done
    echo Copy of c files was successful >> $log_file

    cd ../
    date=`date "+%Y-%m-%d-%H-%M-%S"`
    file_name="exer6.$date"
    tar cfz $file_name ws
    cd exer6

    echo Creation of compressed file was successful >> $log_file
    echo $USER $file_name >> $log_file

    i=`expr ${i} + 1`
    if [ $i -ne $choice ]
    then
        sleep 5
    fi
done
echo '\n'"Backup files created, check the log file in the /log folder to see detailed operations"'\n'
exit 0