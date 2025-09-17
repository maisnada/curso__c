# Language c, shell and commands useful

## Tmux
**Ctrl + B** = ^ (Master key)

**^ + c** - Create new windows

**^ + n** - Switch next windows

**^ + p** - Switch previous
 
**^ + Number session** - Switch to specific windows

**^ + "** - Mode horizintal

**^ + %** - Mode vertical

**^ + Direct** - Switch a windows

**^ + d** - Detached session

**^ + z** - Zoom in and zoom out

**^ + { | } - Move current pan left and right 

**^ + spacebar- Toggle between pane layoutsp

**tmux ls** - List session detached

**tmux a -t + Number session** - To back specific session


## Shell
**!$** - Gets the parameter from the previous command. Ex. previus com. "vi hello.c" = "vi !$"

**!gcc** - Find last command before ! and run. Ex. gcc -o hello hello.c  

**locate + file** - Show locale file

**echo $!** - This is a special variable. It stores the PID of the last command that was run in the background.

**bc** - Calculate. Default base 10. Change obase and ibase for convertion. Ex. ibase=16 input in hex value and output in decimal; obase=16 input in decimal value and output in hex  

**hd** - Display file contents in hex, dec, octal or ascii. Ex. echo test | hd


## Vim

**q** - Quit

**q!** - Quit without saving changes 

**w** - Save

**wq || x** - Save and exit

**o** - Creates new line under cursor and enable mode insert

**dd** - Delete or cut line where it the cursor. To paste type "p"

**yy** - Coppy current line. To past type "p"

**u** - Undo last change

**%s/search_string/replace_string/g** - Replace all


## Class
* class_1 - Initial struct program and function printf;
* class_2 - Function printf and format data;
* class_3 - Function scanf for input data;
* class_4 - Scanf with string, int and float. Constant variable #define;
* class_5 - Color pattern ANSI, IF and concat value with sprintf; 
* class_6 - Function with parameter and return. Library stdbool.h


## References

* Channel YT [Mente binária](https://www.youtube.com/@mentebinaria)
* [GNU C Language introduction and reference manual - Translate to portuguese](https://mentebinaria.gitbook.io/manual-da-linguagem-gnu-c) 
* [GNU C Language introduction and reference manual](https://www.gnu.org/software/c-intro-and-ref/)
* Channel YT [Prof° Pietro Martins](https://www.youtube.com/@profpietromartins) 
