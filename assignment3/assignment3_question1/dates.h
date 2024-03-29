#ifndef HEADER_FILE
#define HEADER_FILE

#include<string>

struct Date
{
	int year;
	int month;
	int day;
};

void set_date(struct Date &);
void print_date(const struct Date &);
int check_month_end(const struct Date &);
void add_day(struct Date &);
void add_month(struct Date &);
void add_year(struct Date &);
struct Date next_monday(struct Date);
std::string days(const struct Date);

#endif
