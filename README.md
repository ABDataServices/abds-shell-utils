# abds-shell-utils

# ABDS Command Line Utilities
This repository contains some command line tools that we use within our character mode DataFlex™ applications. This repository does not include all of our command line tools, just the ones that do not have any security implications to our applications. As we store our data within a FairCom&reg; DB&trade; server, we use DataFlex Linux runtimes for some processes. We employ React javascript code to build the websites that utilize the data. Tools found in this repository represent low-level operating system values that we cannot reliably directly access in the DataFlex runtime.

## abdsppid
<code>abdsppid</code> retrieves the parent process ID and prints it to stdout. We use it to retrieve the DataFlex runtime process ID to differenciate the users accessing DataFlex applications. It is retrieved and stored at program start-up for our DataFlex applications. It is simply printing the integer returned by <code>getppid()</code>.

## abdstmzn
<code>abdstmzn</code> retrieves the current local time offset west of UTC. It is an inversion of <code>struct tm timeVal.__tm_gmtoff</code> retured by the Linux operating system. We need this utility since we have no way of directly querying the OS for this value from the DataFlex runtime. We retrieve this output during DataFlex program start-up, as well. It calls <code>time()</code>, <code>sprintf()</code> and <code>strptime()</code> to handle the necessary conversions.

## sysconf.src
<code>sysconf.src</code> is the source for a DataFlex program that displays all the System Configuration (<code>SysConf()</code>) variables that the Linux DataFlex 3.2 runtime understands. It then executes and displays the output of <code>abdsppid</code> and <code>abdstmzn</code>. 

# How to Build
I have included a CMakeLists.txt to compile the binaries. Simply execute these steps, assuming you have already installed cmake, the <code>gh cli</code> and the desired compiler(s) for your platform. You could use a <code>git remote</code> command in lieu of the<code>gh</code> command in step 2 if you don't want to install <code>gh</code>. Execute the following command on your Linux/Unix host.
1. <code>cd</code> to the directory where you want to place the source subdirectory
2. <code>gh repo clone ABDataServices/abds-shell-utils</code>
3. <code>cd abds-shell-utils</code>
4. <code>mkdir build</code>
5. <code>cd build</code>
6. <code>cmake ../</code>
7. <code>make</code>
8. install to your desired path directory (e.g., <code>~/bin</code> or <code>/usr/local/bin</code>)
