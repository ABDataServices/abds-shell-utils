/*************************************************************************
 *
 *  Confidential Trade Secret
 *  Copyright (c) 2022 AB Data Services, Oakland Park Florida,
 *  as an unpublished work.  All rights reserved.
 *
 *************************************************************************
 *
 * $Description: Outputs PPID to stdout for reading in DataFlex$
 *
 * $Id: abdsppid.c,v 1.4 2022/09/17 18:14:22 eric Exp $
 * $Author: eric $
 * $Date: 2022/09/17 18:14:22 $
 * $Revision: 1.4 $
 * $Name:  $
 *
 *   $Log: abdsppid.c,v $
 *   Revision 1.4  2022/09/17 18:14:22  eric
 *   . Update standard header
 *
 *   Revision 1.3  2022/05/31 21:31:23  eric
 *   . Correct printf() type for getppid() return value
 *
 *   Revision 1.2  2022/05/30 22:13:34  eric
 *   . Switched to getppid() since the pid would point to the dead
 *       shell process invoked by the RunProgram Wait
 *   . Renamed this file to match
 *
 *   Revision 1.1  2022/05/17 21:43:58  eric
 *   Initial revision
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void main( void )
{
  pid_t pid = getppid();

  fprintf( stdout, "%d", pid );
}

/*  abdsppid.c  */
