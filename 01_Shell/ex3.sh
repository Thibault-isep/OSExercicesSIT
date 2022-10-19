#!/bin/sh
# Script to print user information who currently login , current date & time
clear
echo "Hello $USER"'\n'"Today is "
date
echo "Number of user login : "
who | wc -l
echo "Who login: "
who
echo "Calendar"
cal
exit 0