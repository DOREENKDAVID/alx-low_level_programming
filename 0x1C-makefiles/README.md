#Makefiles

#Make Utility and Makefile
The make utility is a software tool for managing and maintaining computer programs consisting many component files. The make utility automatically determines which pieces of a large program need to be recompiled, and issues commands to recompile them.  •Make reads its instruction from Makefile (called the descriptor file) by default.  •Makefile sets a set of rules to determine which parts of a program need to be recompile, and issues command to recompile them.  •Makefile is a way of automating software building procedure and other complex tasks with dependencies.  •Makefile contains: dependency rules, macros and suffix(or implicit) rules.   

#How Does Make Work? 
•The make utility compares the modification time of the target file with the modification times of the dependency files. Any dependency file that has a more recent modification time than its target file forces the  target file to be recreated.  •By default, the first target file is the one that is built. Other targets are checked only if they are dependencies for the first target.  •Except for the first target, the order of the targets does not matter. The make utility will build them in the order required.  
