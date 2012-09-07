int setBookId() {

	/*
		generates a unique hash for books
		no particular ryhme or reason for the need for a unique hash, just fun

		the hash is composed of
			- the integer value of the first three letters of the author
			- the integer value of the first three letters of the author
			- three random integers

		each are limited to 3 to avoid going past the max size of an int
	*/

	int limit = 3;
	
	// generate 
	char * c_title, * c_author;
	c_title = new char [limit];
	c_author = new char [limit];
	strncpy (c_author, author.c_str(), limit);
	strncpy (c_title, title.c_str(), limit);

	int hash = 0;

	int max = strlen(c_author);

	for (int i = 0; i < max; i ++) {

		int char_val = static_cast< int >( c_title [i] );
		int power = (-1) * (i - max) + 1;

		double number_ten = 10;
		double tens = pow(number_ten, power);

		hash += char_val * tens;

		cout << "char_val: " << char_val << " tens: " << tens << " hash: \t" << hash << endl;

	};

	cout << endl;

	return hash;

};
