#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>

int procfile_read(char *buffer, char **buffer_location, off_t offset, int buffer_length, int *eof, void *data)
{
	if (offset > 0){
		return 0;
	} else {
		return sprintf(buffer, "Hello My Proc!!\n");
	}
}


// included for all kernel modules
// included for __init and __exit macros
static int __init myproc_init(void)
{
	printk(KERN_INFO "Start Proc\n");
	struct proc_dir_entry* proc_entry = create_proc_entry("myproc", 0644, NULL);
	proc_entry->read_proc = &procfile_read;
	return 0;
	// Non-zero return means that the module couldn't be loaded.
}

static void __exit myproc_cleanup(void)
{
	remove_proc_entry("myproc", NULL);
}

module_init(myproc_init);
module_exit(myproc_cleanup);
