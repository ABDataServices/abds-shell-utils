/*************************************************************************
 *
 *  Confidential Trade Secret
 *  Copyright (c) 2022 AB Data Services, Oakland Park Florida,
 *  as an unpublished work.  All rights reserved.
 *
 *************************************************************************
 *
 * $Description: AB Data Time Zone Offset Calculation $
 *
 * $Id: abdstmzn.c,v 1.3 2022/11/11 15:06:39 eric Exp $
 * $Author: eric $
 * $Date: 2022/11/11 15:06:39 $
 * $Revision: 1.3 $
 * $Name:  $
 *
 *   $Log: abdstmzn.c,v $
 *   Revision 1.3  2022/11/11 15:06:39  eric
 *   . Convert to newer time functions since daylight isn't 
 *       a flag of whether the current time is a daylight
 *       savings time day
 *
 *   Revision 1.2  2022/09/17 18:13:37  eric
 *   . Update standard header
 *   . Make main argument list void
 *
 *   Revision 1.1  2022/06/03 21:51:41  eric
 *   Initial revision
 *
 */
#define _XOPEN_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main( void )
{
  time_t localTime    = time( NULL );
  char   buffer[256 ] = { 0 };
  struct tm timeStruct = { 0 };

  sprintf( buffer, "%ld", localTime );
  localTime = 0;
  strptime( buffer, "%s", &timeStruct );
  memset( buffer, 0, sizeof( buffer ) );
  printf( "%ld", timeStruct.__tm_gmtoff * -1 );
  memset( &timeStruct, 0, sizeof( timeStruct ) );
  return 0;
}
