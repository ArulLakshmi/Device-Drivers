#include <linux/module.h> /* Needed by all modules */

#include <linux/kernel.h> /* Needed for KERN_INFO */

#include <linux/init.h> /* Needed for the macros */

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arul Lakshmi"); //< The author -- visible when we use modinfo
MODULE_DESCRIPTION("First simple kernel module"); //< The description -- in modinfo

static int __init hello_start(void)

{

printk(KERN_INFO "Loading My first module...\n");

printk(KERN_INFO "DD Lab5\n");

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
