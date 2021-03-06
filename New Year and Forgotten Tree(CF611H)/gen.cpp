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

int n = 110;

int main()
{
	srand(time(0));
	printf("%d\n", n);
	auto digit_num = [](int a){int d = 0; while(a) a /= 10, d++; return d;};
	for(int i=1; i<n; i++) printf("%d %d\n", rand()%i+1, i+1);
	return 0;
}
