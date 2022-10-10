#!/bin/sh
# Script to print current working directory and disk usage
echo "*** Current Working Directory ***"
pwd
echo "*** Check Disk Usage ***"
du ./* | sort -nr | head -10
du -ah