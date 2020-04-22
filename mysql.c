#include <mysql/mysql.h>
#include <stdio.h>
int main(void) {
     MYSQL *conn;
     MYSQL_RES *res;
     MYSQL_ROW row;
     char *server = "localhost";
     char *user = "root";
     char *password = ""; /* set me first */
     char *database = "testdb";
     conn = mysql_init(NULL);

     /* Connect to database */

     if (!mysql_real_connect(conn, server,user, password, database, 0, NULL, 0)) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
    }

    /* Show tables */
    if (mysql_query(conn, "show databases")) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
    }


    /* Create Table*/
//    if (mysql_query(conn,"create table testdb.students(studentid INT PRIMARY KEY,fname VARCHAR(20),lname VARCHAR(20));"))

   res = mysql_use_result(conn);
    /* output table name */
  

//    printf("SHowing TESTDB... %d",mysql_query(conn,"sshow tables from testdb"));

//    printf("MySQL Tables in %s database:\n",database);
    while ((row = mysql_fetch_row(res)) != NULL)
    printf("%s \n", row[0]);


    /* close connection */
    mysql_free_result(res);
    mysql_close(conn);

return 0;
}
