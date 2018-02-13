/* YOUR FILE-HEADER COMMENT HERE */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * Calculate and return the letter grade given a score, using the
 * standard formula: 'A' for >= 90, 'B' >= 80, 'C' >= 70, 'D' >= 60,
 * otherwise 'F'.
 * @param[in] val Score to evaluate
 * @return Letter grade
 */
extern char calc_grade(int val);

int test_signed(size_t sz);

signed char char_max_signed();
signed short short_max_signed();
signed int int_max_signed();
signed long long_max_signed();
signed long long ll_max_signed();

unsigned char char_max_un();
unsigned short short_max_un();
unsigned int int_max_un();
unsigned long long_max_un();
unsigned long long ll_max_un();

int main(int argc, char *argv[])
{
	/* PART 4: YOUR CODE HERE */
	signed char schmax = char_max_signed();
	signed char schmin = -schmax;

	signed short sshormax = short_max_signed();
	signed short sshormin = -sshormax;

	signed int sintmax = int_max_signed();
	signed int sintmin = -sintmax;

	signed long slongmax = long_max_signed();
	signed long slongmin = -slongmax;

	signed long long sllmax = ll_max_signed();
	signed long long sllmin = -sllmax;


	unsigned char unchmax = char_max_un();
	unsigned short unshmax = short_max_un();
	unsigned int untmax = int_max_un();
	unsigned long unlongmax = long_max_un();
	unsigned long long unllmax = ll_max_un();

	printf("\n\nBytes Needed to Store Datatypes\n\n");
	size_t szb = sizeof(bool);
	printf("A bool is %zu bytes\n", szb);
	size_t szch = sizeof(char);
	printf("A char is %zu bytes\n", szch);
	size_t szsh = sizeof(short);
	printf("A short is %zu bytes\n", szsh);
	size_t szint = sizeof(int);
	printf("An int is %zu bytes\n", szint);
	size_t szl = sizeof(long);
	printf("A long is %zu bytes\n", szl);
	size_t szll = sizeof(long long);
	printf("A long long is %zu bytes\n", szll);
	size_t szfl = sizeof(float);
	printf("A float is %zu bytes\n", szfl);
	size_t szdb = sizeof(double);
	printf("A double is %zu bytes\n", szdb);

	printf("\n\nSigned or Unsigned Values of Datatypes\n\n");
	
	long long test = 4;
	long long untest = -4;
	
	if ((char)test == -(unsigned char)untest)
		printf("A char is a signed datatype\n");
	else
		printf("A char is an unsigned datatype\n");

	if ((short)test == -(unsigned short)untest)
		printf("A short is a signed datatype\n");
	else
		printf("A short is an unsigned datatype\n");

	if ((int)test == -(unsigned int)untest)
		printf("An int is a signed datatype\n");
	else
		printf("An int is an unsigned datatype\n");

	if ((long)test == -(unsigned long)untest)
		printf("A long is a signed datatype\n");
	else
		printf("A long is an unsigned datatype\n");

	if ((long long)test == -(unsigned long long)untest)
		printf("A long is a signed datatype\n");
	else
		printf("A long is an unsigned datatype\n");


	printf("\n\nMax and Min Values of Signed Datatypes\n\n");
	printf("The max value for a signed char is %hhd, and the min value is %hhd\n", schmax, --schmin);
	printf("The max value for a signed short is %hd, and the min value is %hd\n", sshormax, --sshormin);
	printf("The max value for a signed int is %d, and the min value is %d\n", sintmax, --sintmin);
	printf("The max value for a signed long is %ld, and the min value is %ld\n", slongmax, --slongmin);
	printf("The max value for a signed long long is %lld, and the min value is %lld\n", sllmax, --sllmin);


	printf("\n\nMax Values of Unsigned Datatypes\n\n");
	printf("The max value for an unsigned char is %hhu\n", unchmax);
	printf("The max value for an unsigned short is %hu\n", unshmax);
	printf("The max value for an unsigned int is %u\n", untmax);
	printf("The max value for an unsigned long is %lu\n", unlongmax);
	printf("The max value for an unsigned long long is %llu\n", unllmax);


	if (argc < 2) {
		fprintf(stderr, "Need a grade value.\n");
		exit(EXIT_FAILURE);
	} else {
		int val = atoi(argv[1]);
		// UNCOMMENT THE FOLLOWING LINE WHEN STARTING PART 5
		printf("Value of %d => grade '%c'\n", val, calc_grade(val));
		
	}
	return 0;
}


signed char char_max_signed()
{
	signed char i = 0;			
	signed char x = 1;
	signed char y = 2;

	// calculates the max possible value of a datatype by repeatedly bitshifting two values,
	// and comparing them to see when overflow occurs
	while (x < y)
	{
		x = x << 1;		
		y = y << 1;

// adds one to i, and shifts the result to the left. i will therefore always be one less 
//than the max val for that number of bits.
		i = ++i << 1;				
	}
	i++;	// the lsb of i is currently zero. We increment to get the true max val.

	return i;
};

signed short short_max_signed()
{
	signed  short i = 0;			
	signed  short x = 1;
	signed  short y = 2;

	// calculates the max possible value of a datatype by repeatedly bitshifting two values,
	// and comparing them to see when overflow occurs
	while (x < y)
	{
		x = x << 1;		
		y = y << 1;

// adds one to i, and shifts the result to the left. i will therefore always be one less 
//than the max val for that number of bits.
		i = ++i << 1;				
	}
	i++;	// the lsb of i is currently zero. We increment to get the true max val.

	return i;
};

signed int int_max_signed()
{
	signed int i = 0;			
	signed int x = 1;
	signed int y = 2;

	// calculates the max possible value of a datatype by repeatedly bitshifting two values,
	// and comparing them to see when overflow occurs
	while (x < y)
	{
		x = x << 1;		
		y = y << 1;

// adds one to i, and shifts the result to the left. i will therefore always be one less 
//than the max val for that number of bits.
		i = ++i << 1;				
	}
	i++;	// the lsb of i is currently zero. We increment to get the true max val.

	return i;
};

signed long long_max_signed()
{
	signed long i = 0;			
	signed long x = 1;
	signed long y = 2;

	// calculates the max possible value of a datatype by repeatedly bitshifting two values,
	// and comparing them to see when overflow occurs
	while (x < y)
	{
		x = x << 1;		
		y = y << 1;

// adds one to i, and shifts the result to the left. i will therefore always be one less 
//than the max val for that number of bits.
		i = ++i << 1;				
	}
	i++;	// the lsb of i is currently zero. We increment to get the true max val.

	return i;
};

signed long long ll_max_signed()
{
	signed long long i = 0;			
	signed long long x = 1;
	signed long long y = 2;

	// calculates the max possible value of a datatype by repeatedly bitshifting two values,
	// and comparing them to see when overflow occurs
	while (x < y)
	{
		x = x << 1;		
		y = y << 1;

// adds one to i, and shifts the result to the left. i will therefore always be one less 
//than the max val for that number of bits.
		i = ++i << 1;				
	}
	i++;	// the lsb of i is currently zero. We increment to get the true max val.

	return i;
};


unsigned char char_max_un()
{
	unsigned char i = 1;			
	unsigned char x = 1;
	unsigned char y = 2;

	// calculates the max possible value of a datatype by repeatedly bitshifting two values,
	// and comparing them to see when overflow occurs
	while (x < y)
	{
		x = x << 1;		
		y = y << 1;

// adds one to i, and shifts the result to the left. i will therefore always be one less 
//than the max val for that number of bits.
		i = i++ << 1;				
	}
	i = i << 1;

	return --i;
};

unsigned short short_max_un()
{
	unsigned short i = 1;			
	unsigned short x = 1;
	unsigned short y = 2;

	// calculates the max possible value of a datatype by repeatedly bitshifting two values,
	// and comparing them to see when overflow occurs
	while (x < y)
	{
		x = x << 1;		
		y = y << 1;

// adds one to i, and shifts the result to the left. i will therefore always be one less 
//than the max val for that number of bits.
		i = i++ << 1;				
	}
	i = i << 1;

	return --i;
};


unsigned int int_max_un()
{
	unsigned int i = 1;			
	unsigned int x = 1;
	unsigned int y = 2;

	// calculates the max possible value of a datatype by repeatedly bitshifting two values,
	// and comparing them to see when overflow occurs
	while (x < y)
	{
		x = x << 1;		
		y = y << 1;

// adds one to i, and shifts the result to the left. i will therefore always be one less 
//than the max val for that number of bits.
		i = i++ << 1;				
	}
	i = i << 1;

	return --i;
};

unsigned long long_max_un()
{
	unsigned long i = 1;			
	unsigned long x = 1;
	unsigned long y = 2;

	// calculates the max possible value of a datatype by repeatedly bitshifting two values,
	// and comparing them to see when overflow occurs
	while (x < y)
	{
		x = x << 1;		
		y = y << 1;

// adds one to i, and shifts the result to the left. i will therefore always be one less 
//than the max val for that number of bits.
		i = i++ << 1;				
	}
	i = i << 1;

	return --i;
};

unsigned long long ll_max_un()
{
	unsigned long long i = 1;			
	unsigned long long x = 1;
	unsigned long long y = 2;

	// calculates the max possible value of a datatype by repeatedly bitshifting two values,
	// and comparing them to see when overflow occurs
	while (x < y)
	{
		x = x << 1;		
		y = y << 1;

// adds one to i, and shifts the result to the left. i will therefore always be one less 
//than the max val for that number of bits.
		i = i++ << 1;				
	}
	i = i << 1;

	return --i;
};
