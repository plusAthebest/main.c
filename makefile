compile: main.c 
	 gcc main.c -o kata

run: kata
	 ./kata

clean: kata
	 rm kata