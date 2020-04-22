contact: contact.c
	gcc contact.c -o contact -lmysqlclient -I/usr/include/mysql/

connection: connection.c
	gcc connection.c -o conn -lmysqlclient -I/usr/include/mysql

mysql: mysql.c

	gcc mysql.c -o mysql -lmysqlclient -I/usr/include/mysql
