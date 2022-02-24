# Homework #4

### due: Friday March 5, 2022

> Each student is responsible for doing their own work.  You are welcome to
> discuss this on slack or in class, but when it comes to writing the code,
> you are expected to write it yourself (and not just copy from someone).

1. Let's expand on our example of a matrix.  Starting with our Matrix example:

   * Read in an integer from the user, `N`

   * Create an empty matrix, `RealMatrix I`

   * Using loops, append `N` rows each with `N` columns with the value
     ``1`` on the diagonal and `0` everywhere else.

     That is, you are constructing an NxN identity matrix.

     There are likely a few ways to do this.  One way you can do this
     is that inside the loop over rows you create a `RealVec` and then
     loop over columns `push_back()` -ing the appropriate values, and
     then finally push the filled row onto `I`.

   * Print the matrix out to the screen.

2. accumulate


3. vector of strings

