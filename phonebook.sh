#!/bin/bash
BOOK = "my_phonebook.txt"
        touch $BOOK #create a blank file
        chmod 700 $BOOK #permission for the user
        exit=0 #exit the flag
while [ $exit -ne 1 ] #run the flag until pressed 1
do
        echo -e "Enter 1 to add, 2 to edit, 3 to view, 4 delete, 5 to exit : "
        read answer #instruction of the file
if [ "$answer" = "1" ] # add new entry in the file
then
        echo "Enter name: "
        read name
        echo "Enter Adrress: "
        read addr
        echo "Enter phone number: "
        read phone
        cat $BOOK > temp #copies the previous entries
        echo $name $addr $phone >> temp #focus on the new entries
        sort -nk1 temp > $BOOK #sort the name in alphatetical order

elif [ "$answer" = "2" ] #this would edit the old entry
then
        echo "Enter name to edit: "
        read name
        cp $BOOK temp
        grep -vw $name $BOOK > temp #pick all the entries except the one that was edit
        echo "Enter new name: "
        read name
        echo "Enter new address: "
        read addr
        echo "Enter new phone number: "
        read phone
        echo $name $addr +$phone >> temp #focues on the entry that is goign to be edit
        sort -nk1 temp > $BOOK # sort and overwrite the phonebook
elif [ "$answer" = "3" ] # display the entry that would exit
        then
        cat $BOOK # show the content
elif [ "$answer" = "4" ] # deletes the entry
        then
        echo "Enter name to delete: "
        read name
        cp $BOOK temp
        grep -vw $name $BOOK > temp #picks the entries but the one that gets deleted from the file
        sort -nk1 temp > $BOOK # sorts whats in temp
elif [ "$answer" = "5" ] #exit option in the file
then
        exit=1 # sets exit the file
else
echo "command not available!" #message invalid command
fi
done
exit 0
