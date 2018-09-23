# b_printf
Because I'm tired of using putstr, putnbr, ...

This project aim to getting familar with C, know how to va_arg, va_start, ... and the most important thing is create my own version of printf to use while I'm studying @ 42SiliconValley.

<b>What is my printf name?</b>
I will call my printf is b_printf from for the whole project.

<b>What can b_printf does?</b>
For now, dummy_printf only handle "scdipoux" case. All the other case and feature couldn't be handle on purpose.

<b> What can 
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
