/*
Arul Lakshmi PK  - CED17I049
Ques 2 :
(a) Write a module that can take an integer parameter when it is loaded with insmod command. 
*/

#include <linux/module.h> /* Needed by all modules */

#include <linux/kernel.h> /* Needed for KERN_INFO */

#include <linux/init.h> /* Needed for the macros */

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arul Lakshmi"); //< The author -- visible when we use modinfo
MODULE_DESCRIPTION("DD Lab Exam ques2"); //< The description -- in modinfo

static int number = 999;

static int __init hello_start(void)

{

printk(KERN_INFO "Loading the ques2_parta module...\n");

printk(KERN_INFO "DD Lab Exam\n");

printk("The integer entered is = %d\n",number);

return 0;

}

static void __exit hello_end(void)

{

printk(KERN_INFO "Goodbye...See you later!!\n");

}

/* A module uses the module_init() module_exit() macros from linux/init.h, which
   identify the initialization function at insertion time and the exit function (as
   shown above)
 */

module_param(number,int,0);

module_init(hello_start);

module_exit(hello_end);