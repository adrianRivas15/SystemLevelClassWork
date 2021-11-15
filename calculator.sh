#!/bin/bash
echo "Enter Numbers: "
read first
echo "Enter Numbers:"
read second
echo "Want to Exit: "
read cancel
echo "Want to erase: "
read erase

#input the type of operations for the calculator
echo "Choose one:"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
echo "5. Cancel"
echo "6. Clear"
read ch
# read the operation and the calculator expressions
case $ch in
1) res=`echo $first + $second | bc`;;
2) res=`echo $first - $second | bc`;;
3) res=`echo $first \* $second | bc`;;
4) res=`echo "scale=2; $first /$second" | bc` ;;
5) res=`echo $cancel "exit=1" | bc` ;;
6) res=`echo $erase  | bc`;;
esac
echo "Result: $res"
exit 0
