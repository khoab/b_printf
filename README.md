# b_printf
Because I'm tired of using putstr, putnbr, ...

This project aim to getting familar with C, know how to va_arg, va_start, ... and the most important thing is create my own version of printf to use while I'm studying @ 42SiliconValley.

<b>What is my printf name?</b>
<br />I will call my printf is b_printf from now for the whole project.

<b>What can b_printf does?</b>
<br />For now, b_printf only handle "scdipoux" case. All the other case and feature couldn't be handle on purpose.

<b> What is some Norme for my b_printf?</b>
<br /><b>1></b> Each function is limited @ 25 lines/ft (Not include function declaration and open-close bracket.
<br /><b>2></b> Maximum is 5 function/file. No more than 5 function will be accepted.
<br /><b>3></b> Only: While-loop, If-Else if/else statement will be accepted. All of the other condition or loop is terminated.
<br /><b>4></b> Only allow to use: <stdarg.h>, and those function: write, malloc, free. All the other lib or function that not declare is terminated. If you want to use any function other than these, write it your own and add it to your own Libft. 
## Compiling

Make sure to edit the `Makefile` to point to
[libft](https://github.com/khoab/libft). Run `make` to compile the
library. Use it like you would use the `printf` function (Only handle "scdipoux" case for now):

```c
size_t  i;

i = 42;
b_printf("value: %d\n", i);

// value: 42
```

## License
`b_printf` is under the **GNU General Public License 3.0**.
