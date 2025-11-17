#include <iostream>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../Utils/globals.h"

int main() {
    
    // Remove the MD shared memory object (if this is the last process)
    shm_unlink(MD_shm_name);

    // Remove the Req shared memory object (if this is the last process)
    shm_unlink(REQ_shm_name);

    // Remove the Resp shared memory object (if this is the last process)
    shm_unlink(RESP_shm_name);

    // Remove the Error shared memory object (if this is the last process)
    shm_unlink(ERROR_shm_name);

    // Remove the Log shared memory object (if this is the last process)
    shm_unlink(LOG_shm_name);

    return 0;
}