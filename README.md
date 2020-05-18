# xv6-OS
Uploaded the pdf in which I have written the changes done to the original xv6 OS.
excluding the bonus part

# REQUIREMENTS
QEMU 3.0 or above

# START
make clean

make SCHEDPOL "flag"

make qemu -nox SCHEDPOL "flag"

## flag
1. DEFAULT - for round robin
2. PBS     - for priority based scheduling
3. FCFS    - for first come first serve scheduling
4. MLFQ    - for multilevel feedback queue scheduling
