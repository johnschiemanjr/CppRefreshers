/*
 * Contact.cpp
 *
 *  Created on: Nov 13, 2020
 *      Author: John
 */

#include "Contact.h"
#include <string>
#include <iostream>

using namespace std;

Contact::Contact(string first, string last, string number)
{
	this->first_name = first;
	this->last_name = last;
	this->phone_number = number;
}

Contact::~Contact()
{
}

string Contact::get_entry() const
{
	return first_name + " " + last_name + ": " + phone_number;
}

bool Contact::operator < (const Contact &other) const
{
	return first_name < other.first_name || last_name < other.last_name || phone_number < other.phone_number;
}

string Contact::get_first_name() const
{
	return first_name;
}

string Contact::get_last_name() const
{
	return last_name;
}

string Contact::get_phone_number() const
{
	return phone_number;
}
