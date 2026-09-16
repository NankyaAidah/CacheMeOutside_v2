# dot_product()

## What it does
The dot product takes two lists of numbers that are the same length. It multiplies the matching numbers together and adds up all the results. For [1,2,3] and [4,5,6] that is 1*4 + 2*5 + 3*6 = 32.

## OOP Concepts Used
I made a Vector class. The numbers are kept in a private variable called values, so outside code cannot change them directly.

The constructor Vector(vector<double> values) lets us make a Vector straight from a list of numbers, like Vector v1({1, 2, 3}).

dot_product(const Vector &other) takes another Vector as input and works with it. This shows how one object can use another object of the same class.

If the two vectors are not the same length, dot_product() throws an error instead of giving a wrong answer.

## Algorithm
First check that both vectors are the same length. If not, throw an error.

Set sum to 0.

Go through each position i, multiply values[i] by other.getValue(i), and add it to sum.

Return sum at the end.

This only needs one loop through the numbers, so it is fast.

## Possible Error Points
The dot product only works if both vectors are the same size, so we check this and throw an error if they are not.

Two empty vectors would just return 0, since the loop would not run at all.

We use double numbers, so the answer is shown as a decimal even if the inputs are whole numbers. This is normal, not a mistake.

Dot product is for two simple lists of numbers and gives back one single number. It is easy to mix it up with matrix multiplication, which is a different operation.
