#### scl-container-init
Docker image showing the scl-container-init feature

Examples:

```
$ sudo ./build
....

$ docker run -t -i container-init
HOSTNAME=c2e7245462b2
TERM=xterm
PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
PWD=/
SHLVL=1
HOME=/root
_=/usr/bin/env
uid=0(root) gid=1001(default) groups=0(root)

$ docker run -t -i container-init /bin/bash
bash: /root/.bashrc: Permission denied
bash-4.3$ id
uid=1001(default) gid=1001(default) groups=1001(default)
bash-4.3$ /scl-container-init 
HOSTNAME=00cd448c94ad
TERM=xterm
PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
_=/usr/bin/env
PWD=/
HOME=/root
SHLVL=2
uid=0(root) gid=1001(default) groups=0(root)
bash-4.3$ /scl-container-init 
bash: /scl-container-init: No such file or directory
```
