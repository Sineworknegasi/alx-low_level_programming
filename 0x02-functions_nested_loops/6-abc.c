
root@48d606347fe8:/alx-low_level_programming/0x02-functions_nested_loops# ls
0-putchar.c  1-alphabet.c  2-print_alphabet_x10.c  3-islower.c  4-isalpha.c  5-sign.c  README.md
root@48d606347fe8:/alx-low_level_programming/0x02-functions_nested_loops# git add .
root@48d606347fe8:/alx-low_level_programming/0x02-functions_nested_loops# git commit -m "5. Sign"
[main 9654b11] 5. Sign
 1 file changed, 29 insertions(+)
 create mode 100755 0x02-functions_nested_loops/5-sign.c
root@48d606347fe8:/alx-low_level_programming/0x02-functions_nested_loops# git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 512 bytes | 512.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Sineworknegasi/alx-low_level_programming.git
   2787d5f..9654b11  main -> main
root@48d606347fe8:/alx-low_level_programming/0x02-functions_nested_loops# cat > 6-abc.c
#include "main.h"
#include <stdio.h>

/**
 * _abs - value absolute
 *
 *@n: The int to print
 * Return: Always 0.
 */

int _abs(int n)
{

if (n < 0)
{
return (n * (-1));
}

else if (n == 0)
{
return (0);
}

else
{
return (n);
}

}
