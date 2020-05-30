# fork lab example 
```
[root@localhost fork-example]# ./fork01
I am process 3095 and my x is 1
I am process 3096 and my x is 1
[root@localhost fork-example]# ./fork02
I am parent 3097
I am child 3098
[root@localhost fork-example]# ./fork03
I am parent 3099,ID = 3099
I am child 3100, ID = 3099
[root@localhost fork-example]# ./fork04 4
i:1 process ID:3101 parent ID:2404 child ID:3102
i:2 process ID:3102 parent ID:1 child ID:3103
[root@localhost fork-example]# i:3 process ID:3103 parent ID:1 child ID:3104
i:4 process ID:3104 parent ID:3103 child ID:0

[root@localhost fork-example]#

```
