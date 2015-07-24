#Introduction
When given a calculation like A<sub>B</sub> % C, computing the value causes difficulty due to the large number incorporated with the program. This led to the development of modular exponentiation, which allows a more efficient calculation procedure for this situation.

#Modular Arithmetic
In this problem, a knowledge of modular arithmetic is mandatory, and there are numerous laws and rules regarding this branch of mathematics. Firstly, we must assume that a<sub>b</sub> % n is uncomputable, but a % n is. From this, we must derive a number of the rules associated with it. One of the most important laws associated with this computation is: (a * b) % n 
	= ((a % n)(b % n)) % n

#Recursive Algorithm
To compute the calculation, there is an efficient recursion algorithm that can be implemented. For example, with the sum 4<sub>8</sub> % 7, there is a simple procedure to calculate this.
1. With a knowledge of simple exponential laws, we know that a<sub>b</sub> = (a<sub>b/2</sub>)((a<sub>b/2</sub>)). Using this, we get derive that a<sub>b</sub> % n = (a<sub>b/2/</sub>)((a<sub>b/2</sub>)) % n. Now, using the modular arithmetic multiplicative law, we can derive that (a<sub>b</sub>) % n = ((a<sub>b/2</sub> % n)((a<sub>b/2</sub> % n)) % n. In this example, we can see that the exponent is even (8), so we can split this up into two different calculations: (4<sub>4</sub>)(4<sub>4</sub>) % 7. Using the laws previously inducted, we know that this calculation equates to ((4<sub>4</sub> % 7)(4<sub>4</sub> % 7)) % 7. 
2. As previously explained, we still must assume that a<sub>b</sub> % n is uncomputable, therefore we must now calculate 4<sub>4</sub> % 7. This means that we have created a new problem with the exact same format as the original one, indicating that it is a recursive situation. From this we realize that we can follow the same procedure of halving the exponent and associating the respective laws.
3. After repeating this method recursively, we reach the situation in which we need to calculate 4<sub>1</sub> % 7. As 1 is not an even number, we must follow a separate method. Using exponent/indices laws, we know that a<sub>b</sub> = (a<sub>b - 1</sub>)(a). Following that, we can apply that rule to this situation, where we get 4<sub>1</sub> % 7 = ((4<sub>0</sub>)(4)) % 7. We know that any number raised to 0 equates to 1, so this computes to (1)(4) % 7 = 4 % 7. 
4. We have know broken up a large problem into branches of smaller problems and once we have calculated the "base" case, the rest of the answers will fill up, ultimately calculating the initial problem. 

#C implementation
This is a C program that implements this recursive algorithm of modular exponentiation given a user defined set of variables. As the program is written in C, the numbers have a set limit, which is an issue I face in this program. 