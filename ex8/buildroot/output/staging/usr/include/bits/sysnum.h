/* WARNING!!! AUTO-GENERATED FILE!!! DO NOT EDIT!!! */

#ifndef _BITS_SYSNUM_H
#define _BITS_SYSNUM_H

#ifndef _SYSCALL_H
# error "Never use <bits/sysnum.h> directly; include <sys/syscall.h> instead."
#endif

#undef __NR_restart_syscall
#define __NR_restart_syscall 0
#define SYS_restart_syscall __NR_restart_syscall
#undef __NR_exit
#define __NR_exit 1
#define SYS_exit __NR_exit
#undef __NR_fork
#define __NR_fork 2
#define SYS_fork __NR_fork
#undef __NR_read
#define __NR_read 3
#define SYS_read __NR_read
#undef __NR_write
#define __NR_write 4
#define SYS_write __NR_write
#undef __NR_open
#define __NR_open 5
#define SYS_open __NR_open
#undef __NR_close
#define __NR_close 6
#define SYS_close __NR_close
#undef __NR_umask
#define __NR_umask 7
#define SYS_umask __NR_umask
#undef __NR_creat
#define __NR_creat 8
#define SYS_creat __NR_creat
#undef __NR_link
#define __NR_link 9
#define SYS_link __NR_link
#undef __NR_unlink
#define __NR_unlink 10
#define SYS_unlink __NR_unlink
#undef __NR_execve
#define __NR_execve 11
#define SYS_execve __NR_execve
#undef __NR_chdir
#define __NR_chdir 12
#define SYS_chdir __NR_chdir
#undef __NR_time
#define __NR_time 13
#define SYS_time __NR_time
#undef __NR_mknod
#define __NR_mknod 14
#define SYS_mknod __NR_mknod
#undef __NR_chmod
#define __NR_chmod 15
#define SYS_chmod __NR_chmod
#undef __NR_chown
#define __NR_chown 16
#define SYS_chown __NR_chown
#undef __NR_lchown
#define __NR_lchown 17
#define SYS_lchown __NR_lchown
#undef __NR_lseek
#define __NR_lseek 18
#define SYS_lseek __NR_lseek
#undef __NR__llseek
#define __NR__llseek 19
#define SYS__llseek __NR__llseek
#undef __NR_getpid
#define __NR_getpid 20
#define SYS_getpid __NR_getpid
#undef __NR_mount
#define __NR_mount 21
#define SYS_mount __NR_mount
#undef __NR_umount2
#define __NR_umount2 22
#define SYS_umount2 __NR_umount2
#undef __NR_setuid
#define __NR_setuid 23
#define SYS_setuid __NR_setuid
#undef __NR_getuid
#define __NR_getuid 24
#define SYS_getuid __NR_getuid
#undef __NR_stime
#define __NR_stime 25
#define SYS_stime __NR_stime
#undef __NR_ptrace
#define __NR_ptrace 26
#define SYS_ptrace __NR_ptrace
#undef __NR_alarm
#define __NR_alarm 27
#define SYS_alarm __NR_alarm
#undef __NR_pause
#define __NR_pause 28
#define SYS_pause __NR_pause
#undef __NR_utime
#define __NR_utime 29
#define SYS_utime __NR_utime
#undef __NR_stat
#define __NR_stat 30
#define SYS_stat __NR_stat
#undef __NR_fstat
#define __NR_fstat 31
#define SYS_fstat __NR_fstat
#undef __NR_lstat
#define __NR_lstat 32
#define SYS_lstat __NR_lstat
#undef __NR_access
#define __NR_access 33
#define SYS_access __NR_access
#undef __NR_chroot
#define __NR_chroot 34
#define SYS_chroot __NR_chroot
#undef __NR_sync
#define __NR_sync 35
#define SYS_sync __NR_sync
#undef __NR_fsync
#define __NR_fsync 36
#define SYS_fsync __NR_fsync
#undef __NR_kill
#define __NR_kill 37
#define SYS_kill __NR_kill
#undef __NR_rename
#define __NR_rename 38
#define SYS_rename __NR_rename
#undef __NR_mkdir
#define __NR_mkdir 39
#define SYS_mkdir __NR_mkdir
#undef __NR_rmdir
#define __NR_rmdir 40
#define SYS_rmdir __NR_rmdir
#undef __NR_dup
#define __NR_dup 41
#define SYS_dup __NR_dup
#undef __NR_pipe
#define __NR_pipe 42
#define SYS_pipe __NR_pipe
#undef __NR_times
#define __NR_times 43
#define SYS_times __NR_times
#undef __NR_clone
#define __NR_clone 44
#define SYS_clone __NR_clone
#undef __NR_brk
#define __NR_brk 45
#define SYS_brk __NR_brk
#undef __NR_setgid
#define __NR_setgid 46
#define SYS_setgid __NR_setgid
#undef __NR_getgid
#define __NR_getgid 47
#define SYS_getgid __NR_getgid
#undef __NR_getcwd
#define __NR_getcwd 48
#define SYS_getcwd __NR_getcwd
#undef __NR_geteuid
#define __NR_geteuid 49
#define SYS_geteuid __NR_geteuid
#undef __NR_getegid
#define __NR_getegid 50
#define SYS_getegid __NR_getegid
#undef __NR_acct
#define __NR_acct 51
#define SYS_acct __NR_acct
#undef __NR_setfsuid
#define __NR_setfsuid 52
#define SYS_setfsuid __NR_setfsuid
#undef __NR_setfsgid
#define __NR_setfsgid 53
#define SYS_setfsgid __NR_setfsgid
#undef __NR_ioctl
#define __NR_ioctl 54
#define SYS_ioctl __NR_ioctl
#undef __NR_fcntl
#define __NR_fcntl 55
#define SYS_fcntl __NR_fcntl
#undef __NR_setpgid
#define __NR_setpgid 56
#define SYS_setpgid __NR_setpgid
#undef __NR_mremap
#define __NR_mremap 57
#define SYS_mremap __NR_mremap
#undef __NR_setresuid
#define __NR_setresuid 58
#define SYS_setresuid __NR_setresuid
#undef __NR_getresuid
#define __NR_getresuid 59
#define SYS_getresuid __NR_getresuid
#undef __NR_setreuid
#define __NR_setreuid 60
#define SYS_setreuid __NR_setreuid
#undef __NR_setregid
#define __NR_setregid 61
#define SYS_setregid __NR_setregid
#undef __NR_ustat
#define __NR_ustat 62
#define SYS_ustat __NR_ustat
#undef __NR_dup2
#define __NR_dup2 63
#define SYS_dup2 __NR_dup2
#undef __NR_getppid
#define __NR_getppid 64
#define SYS_getppid __NR_getppid
#undef __NR_getpgrp
#define __NR_getpgrp 65
#define SYS_getpgrp __NR_getpgrp
#undef __NR_setsid
#define __NR_setsid 66
#define SYS_setsid __NR_setsid
#undef __NR_rt_sigaction
#define __NR_rt_sigaction 67
#define SYS_rt_sigaction __NR_rt_sigaction
#undef __NR_rt_sigreturn
#define __NR_rt_sigreturn 68
#define SYS_rt_sigreturn __NR_rt_sigreturn
#undef __NR_rt_sigprocmask
#define __NR_rt_sigprocmask 69
#define SYS_rt_sigprocmask __NR_rt_sigprocmask
#undef __NR_rt_sigpending
#define __NR_rt_sigpending 70
#define SYS_rt_sigpending __NR_rt_sigpending
#undef __NR_rt_sigtimedwait
#define __NR_rt_sigtimedwait 71
#define SYS_rt_sigtimedwait __NR_rt_sigtimedwait
#undef __NR_rt_sigqueueinfo
#define __NR_rt_sigqueueinfo 72
#define SYS_rt_sigqueueinfo __NR_rt_sigqueueinfo
#undef __NR_rt_sigsuspend
#define __NR_rt_sigsuspend 73
#define SYS_rt_sigsuspend __NR_rt_sigsuspend
#undef __NR_sethostname
#define __NR_sethostname 74
#define SYS_sethostname __NR_sethostname
#undef __NR_setrlimit
#define __NR_setrlimit 75
#define SYS_setrlimit __NR_setrlimit
#undef __NR_getrlimit
#define __NR_getrlimit 76
#define SYS_getrlimit __NR_getrlimit
#undef __NR_getrusage
#define __NR_getrusage 77
#define SYS_getrusage __NR_getrusage
#undef __NR_gettimeofday
#define __NR_gettimeofday 78
#define SYS_gettimeofday __NR_gettimeofday
#undef __NR_settimeofday
#define __NR_settimeofday 79
#define SYS_settimeofday __NR_settimeofday
#undef __NR_getgroups
#define __NR_getgroups 80
#define SYS_getgroups __NR_getgroups
#undef __NR_setgroups
#define __NR_setgroups 81
#define SYS_setgroups __NR_setgroups
#undef __NR_select
#define __NR_select 82
#define SYS_select __NR_select
#undef __NR_symlink
#define __NR_symlink 83
#define SYS_symlink __NR_symlink
#undef __NR_fchdir
#define __NR_fchdir 84
#define SYS_fchdir __NR_fchdir
#undef __NR_readlink
#define __NR_readlink 85
#define SYS_readlink __NR_readlink
#undef __NR_pread
#define __NR_pread 86
#define SYS_pread __NR_pread
#undef __NR_pwrite
#define __NR_pwrite 87
#define SYS_pwrite __NR_pwrite
#undef __NR_swapon
#define __NR_swapon 88
#define SYS_swapon __NR_swapon
#undef __NR_reboot
#define __NR_reboot 89
#define SYS_reboot __NR_reboot
#undef __NR_mmap2
#define __NR_mmap2 90
#define SYS_mmap2 __NR_mmap2
#undef __NR_munmap
#define __NR_munmap 91
#define SYS_munmap __NR_munmap
#undef __NR_truncate
#define __NR_truncate 92
#define SYS_truncate __NR_truncate
#undef __NR_ftruncate
#define __NR_ftruncate 93
#define SYS_ftruncate __NR_ftruncate
#undef __NR_fchmod
#define __NR_fchmod 94
#define SYS_fchmod __NR_fchmod
#undef __NR_fchown
#define __NR_fchown 95
#define SYS_fchown __NR_fchown
#undef __NR_getpriority
#define __NR_getpriority 96
#define SYS_getpriority __NR_getpriority
#undef __NR_setpriority
#define __NR_setpriority 97
#define SYS_setpriority __NR_setpriority
#undef __NR_wait4
#define __NR_wait4 98
#define SYS_wait4 __NR_wait4
#undef __NR_statfs
#define __NR_statfs 99
#define SYS_statfs __NR_statfs
#undef __NR_fstatfs
#define __NR_fstatfs 100
#define SYS_fstatfs __NR_fstatfs
#undef __NR_vhangup
#define __NR_vhangup 101
#define SYS_vhangup __NR_vhangup
#undef __NR_sigaltstack
#define __NR_sigaltstack 102
#define SYS_sigaltstack __NR_sigaltstack
#undef __NR_syslog
#define __NR_syslog 103
#define SYS_syslog __NR_syslog
#undef __NR_setitimer
#define __NR_setitimer 104
#define SYS_setitimer __NR_setitimer
#undef __NR_getitimer
#define __NR_getitimer 105
#define SYS_getitimer __NR_getitimer
#undef __NR_swapoff
#define __NR_swapoff 106
#define SYS_swapoff __NR_swapoff
#undef __NR_sysinfo
#define __NR_sysinfo 107
#define SYS_sysinfo __NR_sysinfo
#undef __NR_sendfile
#define __NR_sendfile 109
#define SYS_sendfile __NR_sendfile
#undef __NR_setdomainname
#define __NR_setdomainname 110
#define SYS_setdomainname __NR_setdomainname
#undef __NR_uname
#define __NR_uname 111
#define SYS_uname __NR_uname
#undef __NR_adjtimex
#define __NR_adjtimex 112
#define SYS_adjtimex __NR_adjtimex
#undef __NR_mprotect
#define __NR_mprotect 113
#define SYS_mprotect __NR_mprotect
#undef __NR_vfork
#define __NR_vfork 114
#define SYS_vfork __NR_vfork
#undef __NR_init_module
#define __NR_init_module 115
#define SYS_init_module __NR_init_module
#undef __NR_delete_module
#define __NR_delete_module 116
#define SYS_delete_module __NR_delete_module
#undef __NR_quotactl
#define __NR_quotactl 117
#define SYS_quotactl __NR_quotactl
#undef __NR_getpgid
#define __NR_getpgid 118
#define SYS_getpgid __NR_getpgid
#undef __NR_bdflush
#define __NR_bdflush 119
#define SYS_bdflush __NR_bdflush
#undef __NR_sysfs
#define __NR_sysfs 120
#define SYS_sysfs __NR_sysfs
#undef __NR_personality
#define __NR_personality 121
#define SYS_personality __NR_personality
#undef __NR_afs_syscall
#define __NR_afs_syscall 122
#define SYS_afs_syscall __NR_afs_syscall
#undef __NR_getdents
#define __NR_getdents 123
#define SYS_getdents __NR_getdents
#undef __NR_flock
#define __NR_flock 124
#define SYS_flock __NR_flock
#undef __NR_msync
#define __NR_msync 125
#define SYS_msync __NR_msync
#undef __NR_readv
#define __NR_readv 126
#define SYS_readv __NR_readv
#undef __NR_writev
#define __NR_writev 127
#define SYS_writev __NR_writev
#undef __NR_getsid
#define __NR_getsid 128
#define SYS_getsid __NR_getsid
#undef __NR_fdatasync
#define __NR_fdatasync 129
#define SYS_fdatasync __NR_fdatasync
#undef __NR__sysctl
#define __NR__sysctl 130
#define SYS__sysctl __NR__sysctl
#undef __NR_mlock
#define __NR_mlock 131
#define SYS_mlock __NR_mlock
#undef __NR_munlock
#define __NR_munlock 132
#define SYS_munlock __NR_munlock
#undef __NR_mlockall
#define __NR_mlockall 133
#define SYS_mlockall __NR_mlockall
#undef __NR_munlockall
#define __NR_munlockall 134
#define SYS_munlockall __NR_munlockall
#undef __NR_sched_setparam
#define __NR_sched_setparam 135
#define SYS_sched_setparam __NR_sched_setparam
#undef __NR_sched_getparam
#define __NR_sched_getparam 136
#define SYS_sched_getparam __NR_sched_getparam
#undef __NR_sched_setscheduler
#define __NR_sched_setscheduler 137
#define SYS_sched_setscheduler __NR_sched_setscheduler
#undef __NR_sched_getscheduler
#define __NR_sched_getscheduler 138
#define SYS_sched_getscheduler __NR_sched_getscheduler
#undef __NR_sched_yield
#define __NR_sched_yield 139
#define SYS_sched_yield __NR_sched_yield
#undef __NR_sched_get_priority_max
#define __NR_sched_get_priority_max 140
#define SYS_sched_get_priority_max __NR_sched_get_priority_max
#undef __NR_sched_get_priority_min
#define __NR_sched_get_priority_min 141
#define SYS_sched_get_priority_min __NR_sched_get_priority_min
#undef __NR_sched_rr_get_interval
#define __NR_sched_rr_get_interval 142
#define SYS_sched_rr_get_interval __NR_sched_rr_get_interval
#undef __NR_nanosleep
#define __NR_nanosleep 143
#define SYS_nanosleep __NR_nanosleep
#undef __NR_poll
#define __NR_poll 144
#define SYS_poll __NR_poll
#undef __NR_nfsservctl
#define __NR_nfsservctl 145
#define SYS_nfsservctl __NR_nfsservctl
#undef __NR_setresgid
#define __NR_setresgid 146
#define SYS_setresgid __NR_setresgid
#undef __NR_getresgid
#define __NR_getresgid 147
#define SYS_getresgid __NR_getresgid
#undef __NR_prctl
#define __NR_prctl 148
#define SYS_prctl __NR_prctl
#undef __NR_socket
#define __NR_socket 149
#define SYS_socket __NR_socket
#undef __NR_bind
#define __NR_bind 150
#define SYS_bind __NR_bind
#undef __NR_connect
#define __NR_connect 151
#define SYS_connect __NR_connect
#undef __NR_listen
#define __NR_listen 152
#define SYS_listen __NR_listen
#undef __NR_accept
#define __NR_accept 153
#define SYS_accept __NR_accept
#undef __NR_getsockname
#define __NR_getsockname 154
#define SYS_getsockname __NR_getsockname
#undef __NR_getpeername
#define __NR_getpeername 155
#define SYS_getpeername __NR_getpeername
#undef __NR_socketpair
#define __NR_socketpair 156
#define SYS_socketpair __NR_socketpair
#undef __NR_send
#define __NR_send 157
#define SYS_send __NR_send
#undef __NR_recv
#define __NR_recv 158
#define SYS_recv __NR_recv
#undef __NR_sendto
#define __NR_sendto 159
#define SYS_sendto __NR_sendto
#undef __NR_recvfrom
#define __NR_recvfrom 160
#define SYS_recvfrom __NR_recvfrom
#undef __NR_shutdown
#define __NR_shutdown 161
#define SYS_shutdown __NR_shutdown
#undef __NR_setsockopt
#define __NR_setsockopt 162
#define SYS_setsockopt __NR_setsockopt
#undef __NR_getsockopt
#define __NR_getsockopt 163
#define SYS_getsockopt __NR_getsockopt
#undef __NR_sendmsg
#define __NR_sendmsg 164
#define SYS_sendmsg __NR_sendmsg
#undef __NR_recvmsg
#define __NR_recvmsg 165
#define SYS_recvmsg __NR_recvmsg
#undef __NR_truncate64
#define __NR_truncate64 166
#define SYS_truncate64 __NR_truncate64
#undef __NR_ftruncate64
#define __NR_ftruncate64 167
#define SYS_ftruncate64 __NR_ftruncate64
#undef __NR_stat64
#define __NR_stat64 168
#define SYS_stat64 __NR_stat64
#undef __NR_lstat64
#define __NR_lstat64 169
#define SYS_lstat64 __NR_lstat64
#undef __NR_fstat64
#define __NR_fstat64 170
#define SYS_fstat64 __NR_fstat64
#undef __NR_pivot_root
#define __NR_pivot_root 171
#define SYS_pivot_root __NR_pivot_root
#undef __NR_mincore
#define __NR_mincore 172
#define SYS_mincore __NR_mincore
#undef __NR_madvise
#define __NR_madvise 173
#define SYS_madvise __NR_madvise
#undef __NR_getdents64
#define __NR_getdents64 174
#define SYS_getdents64 __NR_getdents64
#undef __NR_fcntl64
#define __NR_fcntl64 175
#define SYS_fcntl64 __NR_fcntl64
#undef __NR_gettid
#define __NR_gettid 176
#define SYS_gettid __NR_gettid
#undef __NR_readahead
#define __NR_readahead 177
#define SYS_readahead __NR_readahead
#undef __NR_setxattr
#define __NR_setxattr 178
#define SYS_setxattr __NR_setxattr
#undef __NR_lsetxattr
#define __NR_lsetxattr 179
#define SYS_lsetxattr __NR_lsetxattr
#undef __NR_fsetxattr
#define __NR_fsetxattr 180
#define SYS_fsetxattr __NR_fsetxattr
#undef __NR_getxattr
#define __NR_getxattr 181
#define SYS_getxattr __NR_getxattr
#undef __NR_lgetxattr
#define __NR_lgetxattr 182
#define SYS_lgetxattr __NR_lgetxattr
#undef __NR_fgetxattr
#define __NR_fgetxattr 183
#define SYS_fgetxattr __NR_fgetxattr
#undef __NR_listxattr
#define __NR_listxattr 184
#define SYS_listxattr __NR_listxattr
#undef __NR_llistxattr
#define __NR_llistxattr 185
#define SYS_llistxattr __NR_llistxattr
#undef __NR_flistxattr
#define __NR_flistxattr 186
#define SYS_flistxattr __NR_flistxattr
#undef __NR_removexattr
#define __NR_removexattr 187
#define SYS_removexattr __NR_removexattr
#undef __NR_lremovexattr
#define __NR_lremovexattr 188
#define SYS_lremovexattr __NR_lremovexattr
#undef __NR_fremovexattr
#define __NR_fremovexattr 189
#define SYS_fremovexattr __NR_fremovexattr
#undef __NR_tkill
#define __NR_tkill 190
#define SYS_tkill __NR_tkill
#undef __NR_sendfile64
#define __NR_sendfile64 191
#define SYS_sendfile64 __NR_sendfile64
#undef __NR_futex
#define __NR_futex 192
#define SYS_futex __NR_futex
#undef __NR_sched_setaffinity
#define __NR_sched_setaffinity 193
#define SYS_sched_setaffinity __NR_sched_setaffinity
#undef __NR_sched_getaffinity
#define __NR_sched_getaffinity 194
#define SYS_sched_getaffinity __NR_sched_getaffinity
#undef __NR_capget
#define __NR_capget 195
#define SYS_capget __NR_capget
#undef __NR_capset
#define __NR_capset 196
#define SYS_capset __NR_capset
#undef __NR_io_setup
#define __NR_io_setup 197
#define SYS_io_setup __NR_io_setup
#undef __NR_io_destroy
#define __NR_io_destroy 198
#define SYS_io_destroy __NR_io_destroy
#undef __NR_io_getevents
#define __NR_io_getevents 199
#define SYS_io_getevents __NR_io_getevents
#undef __NR_io_submit
#define __NR_io_submit 200
#define SYS_io_submit __NR_io_submit
#undef __NR_io_cancel
#define __NR_io_cancel 201
#define SYS_io_cancel __NR_io_cancel
#undef __NR_fadvise64
#define __NR_fadvise64 202
#define SYS_fadvise64 __NR_fadvise64
#undef __NR_exit_group
#define __NR_exit_group 203
#define SYS_exit_group __NR_exit_group
#undef __NR_lookup_dcookie
#define __NR_lookup_dcookie 204
#define SYS_lookup_dcookie __NR_lookup_dcookie
#undef __NR_epoll_create
#define __NR_epoll_create 205
#define SYS_epoll_create __NR_epoll_create
#undef __NR_epoll_ctl
#define __NR_epoll_ctl 206
#define SYS_epoll_ctl __NR_epoll_ctl
#undef __NR_epoll_wait
#define __NR_epoll_wait 207
#define SYS_epoll_wait __NR_epoll_wait
#undef __NR_remap_file_pages
#define __NR_remap_file_pages 208
#define SYS_remap_file_pages __NR_remap_file_pages
#undef __NR_set_tid_address
#define __NR_set_tid_address 209
#define SYS_set_tid_address __NR_set_tid_address
#undef __NR_timer_create
#define __NR_timer_create 210
#define SYS_timer_create __NR_timer_create
#undef __NR_timer_settime
#define __NR_timer_settime 211
#define SYS_timer_settime __NR_timer_settime
#undef __NR_timer_gettime
#define __NR_timer_gettime 212
#define SYS_timer_gettime __NR_timer_gettime
#undef __NR_timer_getoverrun
#define __NR_timer_getoverrun 213
#define SYS_timer_getoverrun __NR_timer_getoverrun
#undef __NR_timer_delete
#define __NR_timer_delete 214
#define SYS_timer_delete __NR_timer_delete
#undef __NR_clock_settime
#define __NR_clock_settime 215
#define SYS_clock_settime __NR_clock_settime
#undef __NR_clock_gettime
#define __NR_clock_gettime 216
#define SYS_clock_gettime __NR_clock_gettime
#undef __NR_clock_getres
#define __NR_clock_getres 217
#define SYS_clock_getres __NR_clock_getres
#undef __NR_clock_nanosleep
#define __NR_clock_nanosleep 218
#define SYS_clock_nanosleep __NR_clock_nanosleep
#undef __NR_statfs64
#define __NR_statfs64 219
#define SYS_statfs64 __NR_statfs64
#undef __NR_fstatfs64
#define __NR_fstatfs64 220
#define SYS_fstatfs64 __NR_fstatfs64
#undef __NR_tgkill
#define __NR_tgkill 221
#define SYS_tgkill __NR_tgkill
#undef __NR_utimes
#define __NR_utimes 223
#define SYS_utimes __NR_utimes
#undef __NR_fadvise64_64
#define __NR_fadvise64_64 224
#define SYS_fadvise64_64 __NR_fadvise64_64
#undef __NR_cacheflush
#define __NR_cacheflush 225
#define SYS_cacheflush __NR_cacheflush
#undef __NR_vserver
#define __NR_vserver 226
#define SYS_vserver __NR_vserver
#undef __NR_mq_open
#define __NR_mq_open 227
#define SYS_mq_open __NR_mq_open
#undef __NR_mq_unlink
#define __NR_mq_unlink 228
#define SYS_mq_unlink __NR_mq_unlink
#undef __NR_mq_timedsend
#define __NR_mq_timedsend 229
#define SYS_mq_timedsend __NR_mq_timedsend
#undef __NR_mq_timedreceive
#define __NR_mq_timedreceive 230
#define SYS_mq_timedreceive __NR_mq_timedreceive
#undef __NR_mq_notify
#define __NR_mq_notify 231
#define SYS_mq_notify __NR_mq_notify
#undef __NR_mq_getsetattr
#define __NR_mq_getsetattr 232
#define SYS_mq_getsetattr __NR_mq_getsetattr
#undef __NR_kexec_load
#define __NR_kexec_load 233
#define SYS_kexec_load __NR_kexec_load
#undef __NR_waitid
#define __NR_waitid 234
#define SYS_waitid __NR_waitid
#undef __NR_add_key
#define __NR_add_key 235
#define SYS_add_key __NR_add_key
#undef __NR_request_key
#define __NR_request_key 236
#define SYS_request_key __NR_request_key
#undef __NR_keyctl
#define __NR_keyctl 237
#define SYS_keyctl __NR_keyctl
#undef __NR_ioprio_set
#define __NR_ioprio_set 238
#define SYS_ioprio_set __NR_ioprio_set
#undef __NR_ioprio_get
#define __NR_ioprio_get 239
#define SYS_ioprio_get __NR_ioprio_get
#undef __NR_inotify_init
#define __NR_inotify_init 240
#define SYS_inotify_init __NR_inotify_init
#undef __NR_inotify_add_watch
#define __NR_inotify_add_watch 241
#define SYS_inotify_add_watch __NR_inotify_add_watch
#undef __NR_inotify_rm_watch
#define __NR_inotify_rm_watch 242
#define SYS_inotify_rm_watch __NR_inotify_rm_watch
#undef __NR_openat
#define __NR_openat 243
#define SYS_openat __NR_openat
#undef __NR_mkdirat
#define __NR_mkdirat 244
#define SYS_mkdirat __NR_mkdirat
#undef __NR_mknodat
#define __NR_mknodat 245
#define SYS_mknodat __NR_mknodat
#undef __NR_fchownat
#define __NR_fchownat 246
#define SYS_fchownat __NR_fchownat
#undef __NR_futimesat
#define __NR_futimesat 247
#define SYS_futimesat __NR_futimesat
#undef __NR_fstatat64
#define __NR_fstatat64 248
#define SYS_fstatat64 __NR_fstatat64
#undef __NR_unlinkat
#define __NR_unlinkat 249
#define SYS_unlinkat __NR_unlinkat
#undef __NR_renameat
#define __NR_renameat 250
#define SYS_renameat __NR_renameat
#undef __NR_linkat
#define __NR_linkat 251
#define SYS_linkat __NR_linkat
#undef __NR_symlinkat
#define __NR_symlinkat 252
#define SYS_symlinkat __NR_symlinkat
#undef __NR_readlinkat
#define __NR_readlinkat 253
#define SYS_readlinkat __NR_readlinkat
#undef __NR_fchmodat
#define __NR_fchmodat 254
#define SYS_fchmodat __NR_fchmodat
#undef __NR_faccessat
#define __NR_faccessat 255
#define SYS_faccessat __NR_faccessat
#undef __NR_pselect6
#define __NR_pselect6 256
#define SYS_pselect6 __NR_pselect6
#undef __NR_ppoll
#define __NR_ppoll 257
#define SYS_ppoll __NR_ppoll
#undef __NR_unshare
#define __NR_unshare 258
#define SYS_unshare __NR_unshare
#undef __NR_set_robust_list
#define __NR_set_robust_list 259
#define SYS_set_robust_list __NR_set_robust_list
#undef __NR_get_robust_list
#define __NR_get_robust_list 260
#define SYS_get_robust_list __NR_get_robust_list
#undef __NR_splice
#define __NR_splice 261
#define SYS_splice __NR_splice
#undef __NR_sync_file_range
#define __NR_sync_file_range 262
#define SYS_sync_file_range __NR_sync_file_range
#undef __NR_tee
#define __NR_tee 263
#define SYS_tee __NR_tee
#undef __NR_vmsplice
#define __NR_vmsplice 264
#define SYS_vmsplice __NR_vmsplice
#undef __NR_epoll_pwait
#define __NR_epoll_pwait 265
#define SYS_epoll_pwait __NR_epoll_pwait
#undef __NR_msgget
#define __NR_msgget 266
#define SYS_msgget __NR_msgget
#undef __NR_msgsnd
#define __NR_msgsnd 267
#define SYS_msgsnd __NR_msgsnd
#undef __NR_msgrcv
#define __NR_msgrcv 268
#define SYS_msgrcv __NR_msgrcv
#undef __NR_msgctl
#define __NR_msgctl 269
#define SYS_msgctl __NR_msgctl
#undef __NR_semget
#define __NR_semget 270
#define SYS_semget __NR_semget
#undef __NR_semop
#define __NR_semop 271
#define SYS_semop __NR_semop
#undef __NR_semctl
#define __NR_semctl 272
#define SYS_semctl __NR_semctl
#undef __NR_semtimedop
#define __NR_semtimedop 273
#define SYS_semtimedop __NR_semtimedop
#undef __NR_shmat
#define __NR_shmat 274
#define SYS_shmat __NR_shmat
#undef __NR_shmget
#define __NR_shmget 275
#define SYS_shmget __NR_shmget
#undef __NR_shmdt
#define __NR_shmdt 276
#define SYS_shmdt __NR_shmdt
#undef __NR_shmctl
#define __NR_shmctl 277
#define SYS_shmctl __NR_shmctl
#undef __NR_utimensat
#define __NR_utimensat 278
#define SYS_utimensat __NR_utimensat
#undef __NR_signalfd
#define __NR_signalfd 279
#define SYS_signalfd __NR_signalfd
#undef __NR_eventfd
#define __NR_eventfd 281
#define SYS_eventfd __NR_eventfd

#endif