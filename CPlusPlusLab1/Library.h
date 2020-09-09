#pragma once

struct Book {
	char name[50];
	char author_name[40];
	int quantity;
};

void find_by_name(char* name, Book* list);
void find_by_author(char* name, Book* list);
void print_list(Book* list);