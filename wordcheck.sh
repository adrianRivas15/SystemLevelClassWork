#!/bin/bash
function find_statements(){  #fucntions to find the word in the file
i=0
        while IFS=. read -r -a line   #will call the array and the seperations
        do
        IFS="."

for stat in ${line[@]}    # the line of the array
do
        statements[i]=$(echo $stat | sed 's/^ //g')   #assigns the parts of the array

i=$((i+1))   # this will increase the number in the word count
        done
        done < $1
echo -e "\t\tWords\tletters"   # will show the header of the word count

i=1  # start the array fro the statment to counter the first array
        for statement in ${statements[@]} # Will show statements in the array
        do

words=$(echo $statement | wc -w)   # word count
letters=$(echo $statement | tr -d ' ' | wc -c)   # letter count

echo -e "Statement $i:\t $words\t $((letters-1))" #show the word and letter count
        i=$((i+1))
        done
                        }

if(($#==1))     # will check in the user input is right
        then
file=$1
else
        echo -n "Text file: "
        read file
        fi
        if [ -f $file ]
        then
find_statements $file  # calls the file in the statement
        else # would say error if it does not exist
        echo "$file: file not exist"
        exit 1
        fi
