#!/bin/bash
echo "Type a command"
read cmd_in

if grep -q $cmd_in mandatabase.txt; then
grep $cmd_in mandatabase.txt;
else
echo "sorry, I cannot help you"
fi
