/* My first Org-mode file */

/*      * The function ~puts()~ prints out a string (text in quotes) to */
/*        the screen. */
/*      * In the code block, the syntax is highlighted (which colors are */
/*        used exactly depends on the Emacs theme used). */
/*      * The code block header has the following arguments: */

/*      | HEADER ARGUMENT     | MEANING                                                | */
/*      |---------------------+--------------------------------------------------------| */
/*      | ~:main yes~         | wrap ~puts~ statement in ~int main(void) { }~ function | */
/*      | ~:includes stdio.h~ | include standard input/output header file              | */
/*      | ~:tangle first.c~   | export source code as C file ~first.c~  ("tangle")     | */
/*      | ~:exports both~     | both result and source code will be exported           | */
/*      | ~:comments both~    | link source code and org files, add comments to source | */
/*      | ~:results raw~      | insert output directly in org format into org file     | */

/*      #+name: hello_world_program */

/* [[file:README.org::hello_world_program][hello_world_program]] */
#include "stdio.h"






int main() {
// print a string
puts("hello world");
return 0;
}
/* hello_world_program ends here */
