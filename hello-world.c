
#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

static int hello_init(void){
   printk(KERN_ALERT "Hello, this is your kernel module\n");
   return 0;
}

static void hello_exit(void){
   printk(KERN_INFO "Goodbye from your kernel module.\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("rlmenge");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("rlmenge's first driver with GPL licence.");