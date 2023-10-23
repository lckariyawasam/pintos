#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

#include "threads/synch.h"
#include "filesys/file.h"

struct lock file_system_lock;   

void syscall_init (void);


struct file_descriptor
{
    struct file *_file;             // pointer to file
    int fd;                         // fid
    struct list_elem fd_elem;       // list elem to add to threads open fds list
};


#endif /* userprog/syscall.h */