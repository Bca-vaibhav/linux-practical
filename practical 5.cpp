what command will display the list of all files starting 
from our current directory? Display the names of all ordinary
 files from the current directory and all its sub directories whose
  name ends in "ing" and which have been modified within last 3 days

pubuntu@pubuntu:~$ find print

ashish

64

bcal

bcal/ml

bcal/getdata.txt

bcal/atul.txt

bcal/bcal

bcal/m2

bcal/boyz.txt

bcal/sum

pubuntu@pubuntu:-$ find -name "ing" -type f -mtime -3 -print

//Display filenames ends with ing"

pubuntu@pubuntu:~$ find -name "*ing" -type f-mtime -3 -print

dancing

ring

rubina/dancing

running

sibling 
        
                           //output//
                           
                           
                           pubuntu@pubuntu:~$ find -print

ashish

64

bcal

bcal/ml

bcal/getdata.txt

bcal/atul.txt

bcal/bcal bcal/m2

bcal/boyz.txt

bcal/sum

bcal/lokesh.txt

bcal/stud

bcal/stud/cat

bcal/stud/stud

bcal/stud/girls.txt

bcal/stud/marks bcal/stud/mark

bcal/stud/mark/atul.txt

bcal/stud/mark/lokesh.txt

bcal/girls

bcal/girls/date

bcal/girls/sum bcal/girls/kinnari
pubuntu@pubuntu:~$ find  * -name "*ing" -type f -mtime -3 -print

dancing

name "ring" -type f -mtime -3 -print

ring

rubina/dancing

running

sibling

pubuntu@pubuntu:~$
