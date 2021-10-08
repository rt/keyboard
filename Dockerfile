# The idea would be to containerize qmk_firmware, install deps
# Map specific keyboads/layouts to internal qmk_firmware (no need copy)
# Maybe make it a runnable
FROM ubuntu:20.04
ENV DEBIAN_FRONTEND noninteractive
# RUN apt-get update && apt-get install -y ubuntu-server
# RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y curl vim tmux less git build-essential
RUN apt-get update && \
  apt-get install -y coreutils && \
  apt-get install -y curl && \
  apt-get install -y tmux && \
  apt-get install -y vim && \
  apt-get install -y git && \
  apt-get install -y grip

RUN cd ~ && git clone --depth 1 https://github.com/qmk/qmk_firmware.git
RUN cd ~/qmk_firmware/ 
RUN ./util/qmk_install.sh
RUN make git-submodule

#CMD ["bash", "/work/initialize.sh"]
