# Language c, shell and commands useful ;]

##<=== Tmux ===>
Ctrl + B = ^ - Master key

^ + c - Create new windows
^ + n - Switch next windows
^ + p - Switch previous 
^ + Number session - Switch to specific windows

^ + " - Mode horizintal
^ + % - Mode vertical
^ + Direct - Switch a windows

^ + d - Detached session
tmux ls - List session detached
tmux a -t + Number session - To back specific session


##<=== Shell ===>
!$ - Gets the parameter from the previous command. Ex. previus com. "vi hello.c" = "vi !$"

!gcc - Find last command before ! and run. Ex. gcc -o hello hello.c  
locate + file - Show locale file
echo $! - This is a special variable. It stores the PID of the last command that was run in the background

##<=== Vim ===>
q - Quit
q! - Quit without saving changes 

w - Save
wq || x - Save and exit

o - Creates new line under cursor and enable mode insert
dd - Delete a line where it the cursor

