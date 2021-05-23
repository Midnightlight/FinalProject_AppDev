#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define N 20

typedef struct
{
	int max;
	int min;
	char rname[N];
} Data;

void send_data(Data);