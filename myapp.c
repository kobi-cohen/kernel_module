#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init myapp_init(void)
{
    printk(KERN_INFO "MYAPP: HI!\n");
    return 0;
}

static void __exit myapp_exit(void)
{
    printk(KERN_INFO "MYAPP: BYE!\n");
}

module_init(myapp_init);
module_exit(myapp_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("My first Buildroot Kernel Module");
