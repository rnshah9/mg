# This Dockerfile is used by GitHub to generate an Alpine Linux
# based container with the latest Mg.
#
# To run the containerized Mg and edit files in your $HOME, use
#
#    docker run -ti -v $HOME:/root mg:latest some-filename
#

FROM ubuntu:20.04

RUN apt-get update
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y build-essential clang
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y automake pkg-config libtool

WORKDIR /root
COPY . ./
# RUN CPATH=/root/src
RUN ./autogen.sh
RUN ./configure CC=clang CCFLAGS=-fsanitize=fuzzer-no-link,address 
RUN make -j8
# WORKDIR /root/src
# RUN clang harness.c ../lib/strlcpy.c ../lib/strlcat.c ../lib/strtonum.c ../lib/fparseln.c libmg.a -lncurses -lutil -I. -fsanitize=fuzzer,address

# FROM alpine:latest

# COPY --from=0 /usr/bin/mg /
