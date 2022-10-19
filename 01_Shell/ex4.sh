#!/bin/sh
# save files with .bak as backup
touch text01.c text02.c text03.c
for file in *.c
do
    echo $file
    cp $file $file.bak
done
exit 