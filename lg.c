#include <stdio.h>
#define METACH '\%'

main( argc, argv ) 
int	argc;
char	*argv[];
{
	int	i;
	char	str[BUFSIZ], string[BUFSIZ];

	strcpy( string, "" );
	for ( i=1; i<argc; i++ ) {
		strcat( string, argv[i] );
		strcat( string, " " );
	}

	while ( gets(str)!=NULL ) {
		for ( i=0; i<strlen(string); i++ ) {
			if ( string[i] == METACH ) {
				printf( "%s", str );
			} else {
				printf( "%c", string[i] );
			}
		}
		printf( "\n" );
	}
}
