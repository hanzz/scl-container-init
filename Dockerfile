FROM fedora:21

RUN groupadd -r default -f -g 1001
RUN useradd -u 1001 -r -g default -d ${HOME} -s /sbin/nologin -c "Default Application User" default

COPY scl-container-init /
RUN chown root:root /scl-container-init 
RUN chmod +x /scl-container-init
RUN chmod u+s /scl-container-init

COPY run.sh /

USER 1001

CMD ["/scl-container-init"]
