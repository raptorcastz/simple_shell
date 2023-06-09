# simple_shell

shell project 

Simple shell 0.1: This is a program that acts like a basic command line interface (CLI) or terminal. It can take commands from the user, like "ls" or "echo", and execute them. It can also show a prompt, like "> ", to indicate that it's ready to receive commands. 

Simple shell 0.2: This is an updated version of the program from task 1. It can now handle commands with arguments, like "ls -l" or "echo hello". It can separate the command and its arguments, and pass them to the right function for execution.

Simple shell 0.3: This is another updated version of the program. It can now handle the "PATH", which is a list of directories where the shell looks for commands. It won't create a new process (called "fork") if the command doesn't exist in any of the directories in the PATH. 

Simple shell 0.4: This is a further updated version of the program. It has a new built-in command called "env" that can print the current environment variables. Environment variables are like settings that the shell uses to remember things, like the current user, the current directory, etc.

Simple shell 1.0: This is the final version of the program. It has two new built-in commands called "setenv" and "unsetenv". "setenv" can create a new environment variable or update an existing one with a value. "unsetenv" can remove an environment variable. 

Simple shell 0.1.1: This is another version of the program that includes a custom "getline" function. "getline" is a function that reads input from the user or a file, and it's used to get commands for the shell. The custom "getline" function uses a buffer to read many characters at once, which can make it faster and more efficient. 

Simple shell 0.2.1: This is an updated version of the program from task 6. It doesn't use a function called "strtok" anymore. "strtok" is a function that helps separate strings into smaller parts, but the updated version of the shell uses a different approach.

Setenv, unsetenv: This is an updated version of the program from task 5. It includes two new built-in commands called "setenv" and "unsetenv". "setenv" can create a new environment variable or update an existing one with a value. "unsetenv" can remove an environment variable.

Cd: This is an updated version of the program from task 5. It includes a new built-in command called "cd". "cd" can change the current directory of the shell, which is like changing the folder you're currently in. It can also handle different cases, like changing to a specific directory, going back to the previous directory, etc. 

Commands separator: This is an updated version of the program. It can now handle the semicolon ";" character, which can be used to separate multiple commands on the same line. The shell can execute multiple commands one by one, separated by semicolons, and display the results.

&& and ||: This is another updated version of the program. It can now handle the "&&" and "||" operators, which are used to execute commands conditionally. "&&" means "and", so a "||" means "or", so a command following "||" will only be executed if the command before it fails (returns a non-zero exit status). These operators allow for conditional execution of commands based on the success or failure of previous commands. 

Variables: this is another updated version of the program. It can now handle variables and replace them with their values in commands. Variables are like placeholders that store values, such as numbers or strings. The shell can replace variables with their actual values when executing commands, making it more dynamic and flexible. It also includes two special variables: "$?" and "$$". "$?" holds the exit status of the last executed command, which can indicate whether it succeeded or failed."$$" holds the process ID (PID) of the shell itself, which is a unique identifier for the running shell process.

Comments: This is an updated version of the program. It can now handle comments, which are lines in a command or script that start with "#" character. Comments are used to add explanations or notes in the code, but they are ignored by the shell and not executed as commands. This allows for adding comments to make the code more readable and understandable. 

File as input: This is an updated version of the program. It can now take a file as a command line argument when starting the shell. The file contains a list of commands, with one command per line. The shell can read the commands from the file and execute them automatically, without requiring user input. This can be useful for automating tasks or running scripts with predefined commands. 

File as input: This is an updated version of the program. It can now take a file as a command line argument when starting the shell. The file contains a list of commands, with one command per line. The shell can read the commands from the file and execute them automatically, without requiring user input. This can be useful for automating tasks or running scripts with predefined commands. 

Handling File Input: This is an updated version of the program. It can now read commands from a file and execute them automatically. The shell can take a file as a command line argument when it starts. The file contains a list of commands, with one command per line. The shell reads the commands from the file and executes them one by one. This allows for running a series of commands without needing to enter them manually, which can save time and effort. 

Handling File Output: This is an updated version of the program. It can now redirect the output of commands to a file. The shell can use the ">" character followed by a file name to redirect the standard output (stdout) of a command to a file. For example, "ls > output.txt" will execute the "ls" command and write its output to a file called "output.txt". This allows for capturing the output of commands and saving it to a file for later use. 

Handling File Input and Output: This is an updated version of the program. It can now handle both input and output redirection for commands. The shell can use the "<" character followed by a file name to redirect the standard input (stdin) of a command from a file. It can also use the ">" character followed by a file name to redirect the standard output (stdout) of a command to a file. This allows for reading input from a file and writing output to a file for commands, making the shell more versatile in handling different scenarios. 

Pipes: This is an updated version of the program. It can now handle pipes, which allow for connecting the output of one command to the input of another command. The shell can use the "|" character to create a pipe between two commands. For example, "ls | grep .txt" will execute the "ls" command to list files, and then pass its output to the "grep .txt" command to search for files with the ".txt" extension. Pipes allow for chaining commands together and passing data between them, making the shell more powerful in handling complex command workflows. 

Background Execution: This is an updated version of the program. It can now execute commands in the background, allowing the user to continue using the shell while a command is running. The shell can use the "&" character at the end of a command to run it in the background. For example, "sleep 10 &" will execute the "sleep" command for 10 seconds in the background, allowing the user to continue entering commands in the foreground. Background execution is useful for running long-running commands or tasks without blocking the shell and allowing concurrent operations. 

Command Substitution: This is an updated version of the program. It can now perform command substitution, which allows the output of one command to be used as input for another command. The shell can use the "$()" or "`" characters to perform command substitution. For example, "echo Today is $(date)" will execute the "date" command to get the current date and substitute its output into the "echo" command. Command substitution allows for dynamically generating input or arguments for commands based on the output of other commands, making the shell more flexible and powerful. 

Variables: This is an updated version of the program. It can now handle variables, which are placeholders that store values for later use. The shell can use variables to store and retrieve values, such as filenames, paths, or user-defined data. Variables can be referenced using the "$" character followed by the variable name. For example, "filename=test.txt; cat $filename" will store the value "test.txt" in the variable "filename" and then use it as an argument for the "cat" command. Variables allow for storing and reusing values in commands, making the shell more dynamic and customizable. 

Comments: This is an updated version of the program. It can now handle comments, which are lines in the input that are ignored by the shell and not executed as commands. The shell can use the "#" character to mark the beginning of a comment. For example, "# This is a comment" will be ignored by the shell and not executed as a command. Comments allow for adding explanations or notes in the input without affecting the execution of commands, making the shell more readable and user-friendly.
