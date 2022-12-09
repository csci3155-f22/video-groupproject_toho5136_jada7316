**INTRODUCTION**

Person 1: Hello! My name is __ and I am working with my partner, __, to go over higher-order functions in C++.

Person 2: So what are higher-order functions? Well, higher-order functions are functions that take in another function as an argument. These functions that act as parameters are typically known as callback functions throughout CSCI 3155 and the industry.

Person 1: Higher-order functions are an essential concept to understand if you want to succeed and understand a large portion of the material in CSCI 3155. The sum of the class takes on an entirely different style of coding, called functional programming.

Person 2: Higher-order functions are critical to the main concept of functional programming, being that functions are values that can be passed into and returned from other functions.

Person 1: Let's look at an example that appeared in our CSCI 3155 coursework.

Person 2: As we can see, the function, 'foldLeftAndThen' takes in a tree, z of type A, a function that takes A and Int in as parameters and returns A, and a success continuation that turns type A to type B. In this instance, 'foldLeftAndThen' is a higher-order function. As long as a function has parameters of type A and Int and returns type A, it is a valid input into the 'foldLeftAndThen' function.

Person 1: Now that we know what higher-order functions are and what it looks like, we can discuss what higher-order functions are in C++.

Person 2: Sadly, C++ does not currently possess the same liberties to freely pass in functions as parameters as languages like Python, however, there are a few exceptions and a few workarounds to the idea. Also, all the code used for this next portion of the video can be followed along with and ran from the GitHub repository.

Person 1: One workaround is to use short and unnamed functions known as lambdas. These are small inline functions that can perform a simple task. These are under the large umbrella of higher-order functions, but can be utilized without necessarily being passed as a parameter.

Person 2: There are a few other functions that can be used within C++ that can pass functions as parameters, which exist within the algorithm library.

Person 1: One such case is the transform function. This is equivalent to mapping within Scala, as it allows a vector and a function to be used as inputs, and returns a vector where the function is applied to each element of the original vector.

Person 2: In this specific scenario, the first and second parameters refer to the memory where the 'nums' vector is stored, the third refers to the memory in which this new vector will begin to be placed, and the last parameter is our own function defined above, being 'square_plus_one'.

Person 1: The transform function requires that the callback function inputted has a single parameter matching the type of the vector referred to by the other parameters. It can have any return type, as long as it can be stored within a vector.

Person 2: As demonstrated below, after transform is called, the values stored in num are no longer their original values, but instead the returns of what 'square_plus_one' when each element is inserted as the parameter.

Person 1: If one wanted to instead create a new vector instead of replacing the old one, they could instantiate a blank vector starting at nums.end() and instead change the third parameter to nums.end(), as that third parameter dictates where the results will be allocated to.

Person 2: The other higher-order function used in this example is 'remove_if'. It takes in three parameters. The first is an iteration pointer to where the intended values are first being used, and the second being where it should stop allocating memory.

Person 1: Because the end isn't exactly defined in every situation, it is much easier to use an array for this function, although it is still very much possible with a vector. The final parameter is a function, with any single parameter as an input and either a true or false output.

Person 2: As the name implies, this function will "remove" any element in the array that returns true when inputted into the callback function. It actually does this by only adding to the extra allocated memory if the function returns false, but that isn't the main point here.

Person 1: The point is that this can be used to quickly remove elements from an array, while still making the code very readable. In this situation, we are taking the previous result and pruning any values that are odd numbers.

Person 2: This means that the final array stored in 'nums_arr' will be even numbers that are equal to the sum of one and another number squared, given that number is less than ten. This is relatively complex and barring any type conversions and printing, only takes two lines of code.

Person 1: There are many different versions of 'remove_if', including 'replace_if' and 'remove_copy_if', but at its core, this is the most straightforward and intuitive of them all.

Person 2: But these few functions within a specific library are awfully limiting. Considering that C++ is an object oriented language, there is one workaround that opens the door significantly to what can be done.

Person 1: Instead of simply trying to pass in a function, we could create a series of classes. One of these would be a base class with a virtual operator that needs to be overloaded. Basically, this virtual operator will run if there are no children of the class that overload it. In the example given, this would be the Calculator class, which overloads the basic parentheses after the call name.

Person 2: This is where the strategy comes in. For every new function that we would like to make as a parameter, we make a new class that inherits this virtual function and overloads it with whatever function we would like to carry out. Both Add and Multiply are instances of this.

Person 1: From there, we finally add the operate() function, which is where all of this effort finally comes together in a higher-order function. This will take in the base Calculator class as a parameter and perform whatever a function call on Calculator is.

Person 2: This will be whatever child class is entered into operate(). Because many different classes can inherit calculator and overload the parentheses operator, this ends up in a polymorphized function, where whichever class you enter as a parameter correlates to an overloaded function.

Person 1: All of this work results in being able to call the operate function on a class. All you have to do from a coding standpoint is make sure you create an instance of the child class before calling operate.

Person 2: Although this technically functions, it gets significantly more confusing when adding functions of different return types and needing to overload different return types. On top of this, it assuredly uses more memory and computing power as a new class needs to be made for any custom function.

Person 1: So what are the benefits to doing all this? Why have people painstakingly sorted out ways to functionally program in C++ when it doesn't seem to be beneficial to the time or space complexity of a program?

Person 2: One of the largest benefits to functional programming is increasing the readability of the main line of code. While a bunch of classes or functions are being made, they can all be pushed to another document and instead imported to wherever the main code is.

Person 1: Instead of looking at a long and bloated for loop, it is significantly easier to understand simply mapping an array onto itself with a function as a transformation. It takes a little time to adapt to, but the minimum time needed to comprehend this line of code is much shorter than a for loop.

Person 2: On top of this, it can be easier to test how different functions affect one's software. For example, if someone had a physics simulator and wanted to change an equation, instead of combing through all of their code, they could functionally program and change a return to a callback function.

Person 1: In our situation, if we wanted to get the cube of every number instead of the square, all we could just edit the return of square_plus_one and not have to edit anything in the main function.

Person 2: This helps with the testing and debugging process in general. Only changing one function at a time means its easier to pinpoint what part of your code isn't working correctly, because you only have to change one instance of it to affect your entire code.

Person 1: Within the context of other classes we're taking, our final project for artificial intelligence included higher-order functions where we had to make different functions that would make different moves in a game of Connect Four that would be inputted into a function to make them play.

Person 2: As you can see, functional programming is a key concept not only in CSCI 3155, but also in other classes and throughout computer science in general.

Person 1: Despite C++ not having explicit implementation of higher-order functions, we can use what we learned about them in CSCI 3155 to best apply them to C++ as we can.

Person 2: That concludes our video on what higher-order functions look like in C++. Thank you for watching!
