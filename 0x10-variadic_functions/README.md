# Variadic functions

A function that accepts a variable number of arguments must be declared with a prototype that says so. You write the fixed arguments as usual, and then tack on ‘…’ to indicate the possibility of additional arguments. The syntax of ISO C requires at least one fixed argument before the ‘…’. For example,

int
func (const char *a, int b, …)
{
  …
}
defines a function func which returns an int and takes two required arguments, a const char * and an int. These are followed by any number of anonymous arguments.
