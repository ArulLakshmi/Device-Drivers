/*
Arul Lakshmi PK  - CED17I049
Ques 2 :
(b) Write a module which prints your name in log.
 
*/

#include <linux/module.h> /* Needed by all modules */

#include <linux/kernel.h> /* Needed for KERN_INFO */

#include <linux/init.h> /* Needed for the macros */

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arul Lakshmi"); //< The author -- visible when we use modinfo
MODULE_DESCRIPTION("DD Lab Exam ques2 partb"); //< The description -- in modinfo


static int __init hello_start(void)

{

printk(KERN_INFO "Loading the ques2_partb module...\n");

printk(KERN_INFO "DD Lab Exam\n");

printk("My name is Arul Lakshmi PK .\n");

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


module_init(hello_start);

module_exit(hello_end);