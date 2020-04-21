#include<stdio.h>
#include<mysql/mysql.h>



int main(void){

	printf("Mysql Client version: %s\n",mysql_get_client_info());
	//printf("Host info %s\n",mysql_get_host_info());
	printf("SERVER SQL InFO: \n",mysql_get_server_info());
	return 0;


}
