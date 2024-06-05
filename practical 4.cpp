Redirect the contents of Is -p to a file called dir.
Give the command to redirect the output of long listing files and 
append it to the file dir. Change the mode of those file which begin 
with "s" in such a way that the owner has read and execute permission the group
has read and write permission and others only read permission (use octadecimal representation).

pubuntu@pubuntu:~$ ls -p > dirl

pubuntu@pubuntu:~$ ls -p

ashish/dirneetu/nitu3/purnima/shikha/targetl/b4/dirl

neha/nitu4/r1/shubham/top

bcal/examples.

desktopnitu/

Desktop/

nitu5/

rohit

stud/

prachi/ shil

hello/ nitu2/

pubuntu@pubuntu:~$ head dirl

ashish/

b4/

bcal/

books.txt

cal

Desktop/

dir

dirl

examples.desktop

gl

pubuntu@pubuntu:~$

\\output \\
pubuntu@pubuntu:~$ chmod 365 s*

pubuntu@pubuntu:~$ ls -l

total 152
270 2015-03-13 03:36 shil

-- wxrw-r-x 1 pubuntu pubuntu

d-wxrw-r-x 3 pubuntu pubuntu 4096 2015-03-14 02:19

shikha

d-wxrw-r-x 2

pubuntu pubuntu 4096 2015-02-10 06:44 d-wxrw-r-x 4 pubuntu pubuntu 4096 2015-02-16 06:21 stud d-wxrw-r-x

shubham

3 pubuntu pubuntu 4096 2015-02-24 01:52 studi
