program hello
  implicit none
  print *, "Hello, World!"
end program hello


gcc -shared -o pytran.so -fPIC /home/carlinhoshk/miniconda3/bin/python wrapper.c
