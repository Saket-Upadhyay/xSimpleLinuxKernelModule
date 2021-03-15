#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

static int __init basic_init(void)
{
printk(KERN_INFO "[X64M :] xBasic Kernel Module has been loaded into Kernel.\n");
return 0;
}

static void __exit basic_exit(void)
{

printk(KERN_INFO "[X64M :] xBasic Kernel Module has been un-loaded from Kernel.\n");
}

module_init(basic_init);
module_exit(basic_exit);
