/*
 * net_scan.c
 * 
 * Copyright 2023 Jack <jack@UNKNOWN>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
 
 // https://www.geeksforgeeks.org/creating-a-portscanner-in-c/


#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc < 4){
		printf("Please enter the server IP address and range of ports"
				"to be scanned\n");
		printf("USAGE: %s IPv4 First_Port Last_Port\n", argv[0]);
		exit(1);
	}
	char tIP[16] = {0};
	strcopy(tIP, argv[1]); //copying IP address to array
	char first_Port[6] = {0};
	strcopy(first_Port, argv[2]);
	char last_Port[6] = {0};
	strcopy(last_Port, argv[3]);
	
	// Start port scanner
	port_scanner(tIP, first_Port, last_Port);
	return 0;
}


// Step 2




