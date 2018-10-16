#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>



// included for all kernel modules
// included for __init and __exit macros
static int __init mymodule_init(void)
{
	printk(KERN_INFO "Hello Kernel\n");

	return 0;
	// Non-zero return means that the module couldn't be loaded.
}

static void __exit mymodule_cleanup(void)
{
	
}

module_init(mymodule_init);
module_exit(mymodule_cleanup);

