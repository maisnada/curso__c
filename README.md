# Language c, shell and commands useful

## <=== Tmux ===>
Ctrl + B = ^ - Master key

** ^ + c ** - Create new windows
** ^ + n ** - Switch next windows
** ^ + p ** - Switch previous 
^ + Number session - Switch to specific windows

^ + " - Mode horizintal
^ + % - Mode vertical
^ + Direct - Switch a windows

^ + d - Detached session
tmux ls - List session detached
tmux a -t + Number session - To back specific session


## <=== Shell ===>
!$ - Gets the parameter from the previous command. Ex. previus com. "vi hello.c" = "vi !$"

!gcc - Find last command before ! and run. Ex. gcc -o hello hello.c  

locate + file - Show locale file

echo $! - This is a special variable. It stores the PID of the last command that was run in the background.

bc - Calculate. Default base 10. Change obase and ibase for convertion. Ex. ibase=16 input in hex value and output in decimal; obase=16 input in decimal value and output in hex  


## <=== Vim ===>
q - Quit
q! - Quit without saving changes 

w - Save
wq || x - Save and exit

o - Creates new line under cursor and enable mode insert
dd - Delete a line where it the cursor
hd - display file contents in hex, dec, octal or ascii. Ex. echo test | hd


## <=== Class ===>
* class_1 - initial struct program and function printf;


## <== References ==>

* Channel YT [Mente binária](https://www.youtube.com/@mentebinaria)
* [GNU C Language introduction and reference manual - Translate to portuguese](https://mentebinaria.gitbook.io/manual-da-linguagem-gnu-c) 
* [GNU C Language introduction and reference manual](https://www.gnu.org/software/c-intro-and-ref/) 
