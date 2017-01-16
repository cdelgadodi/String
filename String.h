#include <stdio.h>
#include <stdlib.h>

#ifndef abr
#define abr

class String{
	
	private:
	int size_;
	int size_max;
	char* string[];
	
	
	public:
	String();	//default constructor
	String(const String& copycstr);		//copy constructor
	String(const char* cstr);		//constructor from c-string
	~String();		//destructor
	
	char* c_str();
	int size();		//number of bytes
	int length();		//number of bytes taken up by the String
	String operator=(const String);
	String operator+(const char);
	
	int max_size();		//max number of char in the String 
	int capacity();		//number of bytes allocated to the String
	String operator=(const char);
	String operator+(const char*);
	
	void resize(const int n, const char c);		//n=new size, c=char to use to fill the rest of the String if expended
	int empty();	//return 0 if empty, else 1.
	void reserve(const int n);	//increase the capacity to n if n greater than current capacity
	String operator=(char*);
	String operator+(String);
	
	
};


#endif
