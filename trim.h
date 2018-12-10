/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 9
 * Title:			trim.h
 * Author:			Vinzent Kronreif
 * Due Date:		
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */

 #ifndef ___TRIM_H
  #define ___TRIM_H

  #define STRLEN 30

  void trim(char* str,char* trimmed);
  void remove_leading_blanks(char* source,char testChar[]);
  void remove_trailing_blanks(char testChar[]);

 #endif
