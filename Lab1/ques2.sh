#!/usr/bin/bash
# A shell script to perform mathematical operations like addition,division,factorial as per users choice.
echo "
Operations:
    1. Addition
    2. Division
    3. Factorial
    4. Quit
"

while true
do
	read -p "Enter your choice [1-4] : " ch
	case $ch in
		1)
		read -p "Enter first number: "  a
		read -p "Enter second number: " b
		s=$((a+b))
		echo "Sum of $a + $b = $s"
		;;
		2)
		read -p "Enter dividend: "  dividend
		read -p "Enter divisor: " divisor
		quotient=$((dividend/divisor))
		remainder=$((dividend%divisor))
		echo "Quotient: $quotient"
		echo "Remainder: $remainder"
		;;
		3)
		read -p "Enter a number to find its factorial:" num  
		n=$num
		fact=1
		while [ $num -gt 1 ]
		do
			fact=$((fact * num))  #fact = fact * num
			num=$((num - 1))      #num = num - 1
		done

		echo "Factorial of $n is = $fact"
		;;
		4)
		echo "Bye!"
		exit
		;;
	esac
done
