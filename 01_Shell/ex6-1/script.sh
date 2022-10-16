#!/bin/sh
mkdir exer6 log ws
cd exer6
touch a.c b.c c.c a.txt
echo '\n'Creation of folders and files was successful'\n'

log_file=../log/exer6.log
printf "*** Log File ***"'\n' > $log_file
echo '\n'Creation of log file was successful'\n'

i=0
while [ $i -ne 5 ]
do  
    counter=$((i + 1))
    echo '\n'Backup files number $counter'\n'
    for file in *.c
        do
        cp -v $file ../ws
    done
    echo '\n'Copy of c files was successful'\n'

    cd ../
    date=`date "+%Y-%m-%d-%H-%M-%S"`
    file_name="exer6.$date"
    tar cfz $file_name ws
    echo '\n'Creation of compressed file was successful'\n'
    
    cd exer6
    echo $USER $file_name >> $log_file
    echo '\n'Log file edited'\n'

    i=`expr ${i} + 1`
    sleep 5
done
exit 0