INTRODUCTION\
Person 1: Hello! My name is __ and I am working with my partner, __, to go over higher-order functions in C++.\

Person 2: So what are higher-order functions? Well, higher-order functions are functions that take in another function as an argument. These functions that act as parameters are typically known as callback functions throughout CSCI 3155 and the industry.\

Person 1: Higher-order functions are an essential concept to understand if you want to succeed and understand a large portion of the material in CSCI 3155. The sum of the class takes on an entirely different style of coding, called functional programming.\

Person 2: Higher-order functions are critical to the main concept of functional programming, being that functions are values that can be passed into and returned from other functions.\

Person 1: Let's look at some examples that we have done in CSCI 3155.\

Person 2: As we can see, the function, 'foldLeftAndThen' takes in a tree, z of type A, a function that takes (A, Int) and returns A, and a success continuation that turns type A to type B. In this instance, 'foldLeftAndThen' is ahigher-order function. As long as a function has parameters of type A and Int and returns type A, it is a valid input into the 'foldLeftAndThen' function.\

Person 1: Now that we know what higher-order functions are and what it looks like, we can discuss what higher-order functions are in C++.\

Person 2: Sadly, C++ does not currently possess the same liberties to freely pass in functions as parameters as Scala does, however, there are a few exceptions and a few workarounds to the idea.\

Person 1: One workaround is to use short and unnamed functions known as lambdas. These are small inline functions that can perform a simple task. These are under the large umbrella of higher-order functions, but can be utilized without necessarily being passed as a parameter.\

Person 2: There are a few other functions that can be used within C++ that can pass functions as parameters, which exist within the algorithm library.\

Person 1: One such case is the transform function. This is equivalent to mapping within Scala, as it allows a vector and a function to be used as inputs, and returns a vector where the function is applied to each element of the original vector.\

Person 2: In this specific scenario, the first and second parameters refer to the memory where the 'nums' vector is stored, the third refers to the memory in which this new vector will begin to be placed, and the last parameter is our own function defined above, being 'square_plus_one'.

Person 1: The transform function requires that the callback function inputted has a single parameter matching the type of the vector referred to by the other parameters. It can have any return type, as long as it can be stored within a vector.\

Person 2: As demonstrated below, after transform is called, the values stored in num are no longer their original values, but instead the returns of 'square_plus_one' when each element is inserted as the parameter.\

Person 1: If one wanted to instead create a new vector instead of replacing the old one, they could instantiate a blank vector starting at nums.end() and instead change the third parameter to nums.end(), as that third parameter dictates where the results will be allocated to.\

Person 2: The other higher-order function used in this example is 'remove_if'. It takes in three parameters. The first is an iteration pointer to where the intended values are first being used, and the last being where it should stop allocating memory.\

Person 1: Because the end isn't exactly defined in every situation, it is much easier to use an array for this function, although it is still very much possible with a vector. The final parameter is a function, with any single parameter as an input and either a true or false output.\

Person 2: As the name implies, this function will "remove" any element in the array that returns true when inputted into the callback function. It actually does this by only adding to the extra allocated memory if the function returns false, but that isn't the main point here.

Person 1: The point is that this can be used to quickly remove elements from an array, while still making the code very readable. In this situation, we are taking the previous result and pruning any values that are odd numbers.\

Person 2: This means that the final array stored in 'nums_arr' will be even numbers that are equal to the sum of one and another number squared, given that number is less than ten. This is relatively complex  and barring any type conversions and printing, only takes two lines of code.\

Person 1: There are many different versions of 'remove_if', including 'replace_if' and 'remove_copy_if', but at its core, this is the most straightforward and intuitive of all of them.\

Person 2: So what are the benefits of using higher-order function? For starters, using higher-order function allows the code to be more simplified which will allow easier reading. It will also make it much easier for others to read your code as well.\
Person 1: It is also easier to debug whenever there is an error in your code because using higher-order functions reduces the amount of code that you need to write.\
Person 2: As you can see, functional programming is a key concept not only in CSCI 3155, but also in real world situations.\
Person 1: Although C++ does not have higher-order functions, we can take what we learned about higher-order functions and create pseudo higher-order functions in other programming languages.\
Person 2: That concludes our video on what higher-order functions look like in C++. Thank you for watching!\
