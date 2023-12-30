#include <linux/module.h>
#include <linux/init.h>
#include <linux/printk.h>

MODULE_DESCRIPTION("tsulab");
MODULE_AUTHOR("aevameow");
MODULE_LICENSE("GPL");

int init_module(void)
{
    printk(KERN_INFO "Welcome to the Tomsk State University\n");

    return 0;
}

void cleanup_module(void)
{
    printk(KERN_INFO "Tomsk State University forever!\n");
}

