# abds-shell-utils

# ABDS Command Line Utilities

This repository contains some command line tools that we use within our character mode DataFlex™ applications. This repository does not include all of our command line tools, just the ones that do not have any security implications to our applications. As we store our data within a FairCom&reg; DB server, we use DataFlex Linux runtimes for some processes and React javascript code to build the websites that utilize the data. Tools found in this repository represent low-level operating system values that cannot be directly accessed by the DataFlex runtime.

## abdsppid
<code>abdsppid</code> retrieves the parent process ID and prints it to stdout. We use it to retrieve the DataFlex runtime process ID to differenciate the users accessing DataFlex applications. It is retrieved and stored at program start-up for our DataFlex applications.

## abdstmzn
<code>abdstmzn</code> retrieves the current local time offset west of UTC. It is an inversion of <code>struct tm timeVal.__tm_gmtoff</code> retured by the Linux operating system. We need this utility since we have no way of directly querying the OS for this value from the DataFlex runtime. We retrieve this output during DataFlex program start-up, as well.
