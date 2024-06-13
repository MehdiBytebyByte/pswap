max=100
for((i=0; i < $max; i++))
do
	arg=$(seq 1 5| sort -R)
	./push_swap $arg | wc -l
done