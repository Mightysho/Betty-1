int func0(void);
char *_strchr(char *, char);

typedef unsigned int sample;

struct sample_s
{
	int data;
};

enum sample_e
{
	FIRST = 0,
	SECOND
};

union sample_u
{
	char rgba[4];
	int value;
};
