Worker information
hostname: i-06ab4d0-precise-production-2-worker-org-docker.travisci.net:508debb5-d566-414f-9d00-7a3795db6c4f
version: v2.5.0 https://github.com/travis-ci/worker/tree/da3a43228dffc0fcca5a46569ca786b22991979f
instance: f360de7:travis:default
startup: 741.420051ms
Build system information
Build language: c
Build group: stable
Build dist: precise
Build id: 218623777
Job id: 218623778
travis-build version: 4a669c7bf
Build image provisioning date and time
Thu Feb  5 15:09:33 UTC 2015
Operating System Details
Distributor ID:	Ubuntu
Description:	Ubuntu 12.04.5 LTS
Release:	12.04
Codename:	precise
Linux Version
3.13.0-29-generic
Cookbooks Version
a68419e https://github.com/travis-ci/travis-cookbooks/tree/a68419e
GCC version
gcc (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3
Copyright (C) 2011 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

LLVM version
clang version 3.4 (tags/RELEASE_34/final)
Target: x86_64-unknown-linux-gnu
Thread model: posix
Pre-installed Ruby versions
ruby-1.9.3-p551
Pre-installed Node.js versions
v0.10.36
Pre-installed Go versions
1.4.1
Redis version
redis-server 2.8.19
riak version
2.0.2
MongoDB version
MongoDB 2.4.12
CouchDB version
couchdb 1.6.1
Neo4j version
1.9.4
RabbitMQ Version
3.4.3
ElasticSearch version
1.4.0
Installed Sphinx versions
2.0.10
2.1.9
2.2.6
Default Sphinx version
2.2.6
Installed Firefox version
firefox 31.0esr
PhantomJS version
1.9.8
ant -version
Apache Ant(TM) version 1.8.2 compiled on December 3 2011
mvn -version
Apache Maven 3.2.5 (12a6b3acb947671f09b81f49094c53f426d8cea1; 2014-12-14T17:29:23+00:00)
Maven home: /usr/local/maven
Java version: 1.7.0_76, vendor: Oracle Corporation
Java home: /usr/lib/jvm/java-7-oracle/jre
Default locale: en_US, platform encoding: ANSI_X3.4-1968
OS name: "linux", version: "3.13.0-29-generic", arch: "amd64", family: "unix"

$ export DEBIAN_FRONTEND=noninteractive
Reading package lists...
Building dependency tree...
Reading state information...
The following extra packages will be installed:
  libc-bin libc-dev-bin libc6-dev
Suggested packages:
  glibc-doc
The following packages will be upgraded:
  libc-bin libc-dev-bin libc6 libc6-dev
4 upgraded, 0 newly installed, 0 to remove and 275 not upgraded.
Need to get 8,856 kB of archives.
After this operation, 13.3 kB of additional disk space will be used.
Get:1 http://us.archive.ubuntu.com/ubuntu/ precise-updates/main libc6-dev amd64 2.15-0ubuntu10.18 [2,948 kB]
Get:2 http://us.archive.ubuntu.com/ubuntu/ precise-updates/main libc-dev-bin amd64 2.15-0ubuntu10.18 [84.5 kB]
Get:3 http://us.archive.ubuntu.com/ubuntu/ precise-updates/main libc-bin amd64 2.15-0ubuntu10.18 [1,178 kB]
Get:4 http://us.archive.ubuntu.com/ubuntu/ precise-updates/main libc6 amd64 2.15-0ubuntu10.18 [4,646 kB]
Fetched 8,856 kB in 0s (33.6 MB/s)
Preconfiguring packages ...
(Reading database ... 71420 files and directories currently installed.)
Preparing to replace libc6-dev 2.15-0ubuntu10.10 (using .../libc6-dev_2.15-0ubuntu10.18_amd64.deb) ...
Unpacking replacement libc6-dev ...
Preparing to replace libc-dev-bin 2.15-0ubuntu10.10 (using .../libc-dev-bin_2.15-0ubuntu10.18_amd64.deb) ...
Unpacking replacement libc-dev-bin ...
Preparing to replace libc-bin 2.15-0ubuntu10.10 (using .../libc-bin_2.15-0ubuntu10.18_amd64.deb) ...
Unpacking replacement libc-bin ...
Processing triggers for man-db ...
Setting up libc-bin (2.15-0ubuntu10.18) ...
(Reading database ... 71419 files and directories currently installed.)
Preparing to replace libc6 2.15-0ubuntu10.10 (using .../libc6_2.15-0ubuntu10.18_amd64.deb) ...
Unpacking replacement libc6 ...
Setting up libc6 (2.15-0ubuntu10.18) ...
Setting up libc-dev-bin (2.15-0ubuntu10.18) ...
Setting up libc6-dev (2.15-0ubuntu10.18) ...
Processing triggers for libc-bin ...
ldconfig deferred processing now taking place
$ git clone --depth=50 --branch=master https://github.com/DanziLLL/lab5.git DanziLLL/lab5
Cloning into 'DanziLLL/lab5'...
remote: Counting objects: 61, done.
remote: Compressing objects: 100% (46/46), done.
remote: Total 61 (delta 13), reused 49 (delta 7), pack-reused 0
Unpacking objects: 100% (61/61), done.
Checking connectivity... done.

$ cd DanziLLL/lab5
$ git checkout -qf 3de00f1a7207fe4017f79f3ae380cd73b6791b28
$ export CC=gcc
$ gcc --version
gcc (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3
Copyright (C) 2011 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

$ make
Creating directories
Beginning release build
Compiling: src/main.c -> build/release/src/main.o
gcc  -Wall -Wextra -D NDEBUG -O2 -I src/ -I thirdparty/ -MP -MMD -c src/main.c -o build/release/src/main.o
src/main.c: In function ‘main’:
src/main.c:5:10: warning: ignoring return value of ‘scanf’, declared with attribute warn_unused_result [-Wunused-result]
Compiling: src/solve.c -> build/release/src/solve.o
gcc  -Wall -Wextra -D NDEBUG -O2 -I src/ -I thirdparty/ -MP -MMD -c src/solve.c -o build/release/src/solve.o
Linking: bin/release/lab5
gcc build/release/src/main.o build/release/src/solve.o  -lm -o bin/release/lab5
Compiling: test/main.c -> build/release/test/main.o
gcc  -Wall -Wextra -D NDEBUG -O2 -I src/ -I thirdparty/ -MP -MMD -c test/main.c -o build/release/test/main.o
Compiling: test/tests.c -> build/release/test/tests.o
gcc  -Wall -Wextra -D NDEBUG -O2 -I src/ -I thirdparty/ -MP -MMD -c test/tests.c -o build/release/test/tests.o
Linking: bin/release/lab5_test
gcc build/release/src/solve.o build/release/test/main.o build/release/test/tests.o  -lm -o bin/release/lab5_test

TEST 1/4 test_suite:no_roots Only complex roots[OK]
TEST 2/4 test_suite:one_root x = 3.000000[OK]
TEST 3/4 test_suite:two_roots x1 = 0.250000, x2 = -0.500000[OK]
TEST 4/4 test_suite:negative_discriminant [OK]
RESULTS: 4 tests (4 ok, 0 failed, 0 skipped) ran in 0 ms


The command "make" exited with 0.

Done. Your build exited with 0.
