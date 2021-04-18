// https://wogh8732.tistory.com/304
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <asm/uaccess.h>
#include <linux/slab.h>

static char *buffer = NULL;

int test_open(struct inode* inode, struct file *filp) {
  printk(KERN_ALERT "test_device open function called\n");
  return 0;
}
