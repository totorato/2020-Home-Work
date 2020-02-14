#include <bits/stdc++.h>

using namespace std;

template <typename T> void cmin(T &x, const T &y)
{
	if(y < x) x = y;
}

template <typename T> void cmax(T &x, const T &y)
{
	if(y > x) x = y;
}

template <typename T> void read(T &x)
{
	x = 0; char c = getchar(); bool f = 0;
	while(!isdigit(c) && c!='-') c = getchar();
	if(c == '-') f = 1, c = getchar();
	while(isdigit(c)) x = x*10+c-'0', c = getchar();
	if(f) x = -x;
}

int f[100005], n;

int calc(ifstream &str)
{
	memset(f, 0x3f, sizeof(f));
	f[0] = 0;
	for(int i=1; i<=n; i++)
	{
		int a;
		str >> a;
		*lower_bound(f, f+n+1, a) = a;
	}
	return lower_bound(f, f+n+1, 1e9) - f;
}

int main()
{
	system("g++ -o main main.cpp");
	system("g++ -o gen gen.cpp");
	system("g++ -o ok ok.cpp");
	for(int i=1; i<=10000; i++)
	{
		char str[100];
		sprintf(str, "echo %d | ./gen > in", i);
		system(str);
		system("./main < in > out");
		system("./ok < in > ans");
		ifstream out("./out");
		ifstream ans("./ans");
		ifstream in("./in");
		in >> n;
		if(calc(out) != calc(ans))
		{
			printf("??\n");
			break;
		}
		else printf("%d\n", i);
	}
	return 0;
}
