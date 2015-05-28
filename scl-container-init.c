#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char **argv) {
    char *name[] = {
        "/bin/bash",
        "/run.sh",
        NULL
    };

    if (unlink("/scl-container-init") != 0) {
        fprintf(stderr, "Unlinking of /scl-container-init failed: %s\n",
                strerror(errno));
        return -1;
    }

    if (setuid(0) != 0) {
        fprintf(stderr, "Switching user to root failed: %s\n",
                strerror(errno));
        return -1;
    }

    if (execv(name[0], name) == -1) {
        fprintf(stderr, "Execution of /run.sh failed: %s\n",
                strerror(errno));
        return -1;
    }
}
