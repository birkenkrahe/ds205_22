## My first Org-mode file

##     * The function ~str()~ prints all variables (column vectors) of a
##       data structure.
##     * In the code block, ~str()~ is applied to the built-in data frame
##       ~mtcars~.
##     * The result shows that ~mtcars~ contains 32 rows (observations)
##       of 11 variables.
##     * The code block header exports both source code and result,
##       starts an R session, and prints the result to ~stdout~.
##     * The syntax is not highlighted (language keywords like ~str~ and
##       data like ~mtcars~ are not visually distinguished).


##     #+name: first_program

## [[file:README.org::first_program][first_program]]
str(mtcars)
## first_program ends here
