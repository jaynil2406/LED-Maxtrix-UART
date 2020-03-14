/*
 * stringReplacement.h
 *
 *  Created on: Mar 6, 2020
 *      Author: JaYniL~LM10
 */

#ifndef STRINGREPLACEMENT_H_
#define STRINGREPLACEMENT_H_

typedef struct var
{
    int indi[20];
}vari;
char string[20];
vari num;

void string_copy( const char source_string[] ,  char destination_string[]);
char* itoa(int variable);
#endif /* STRINGREPLACEMENT_H_ */
