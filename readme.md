# C and mysql Example.


## Lessons while Setting up MYSQL and C Connector.
	* Install libmysqlclient-dev for easy mysql connection using C.
	
    Configuration is the key:-
	* Add following to /etc/mysql/conf.d/mysql.cnf
		* [mysqld]
		* datadir = /var/lib/mysql/
		* socket = /var/lib/mysql/mysql.sock
		* #[client] // This was resulting in error while accessing mysql from terminal.
		* #socket=/var/lib/mysql/mysql.sock // Comment it out if exists.

	* Create a symbolic link of the socket file from /var/run/mysqld.sock
	* vim /etc/mysql/mysql.conf.d/mysqld.cnf

		

### Things to take care while compiling.

	*  gcc FILENAME.c -o OUTPUTFILE -lmysqlclient 


