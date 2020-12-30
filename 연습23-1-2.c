#include <stdio.h>

struct point {
	int x;
	int y;
};

struct point PointAdd(struct point a, struct point b) {
	struct point c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;

	return c;
}

int main(void) {
	struct point aa, bb, cc;

	scanf("%d %d", &aa.x, &aa.y);
	scanf("%d %d", &bb.x, &bb.y);

	cc = PointAdd(aa, bb);
	printf("%d %d", cc.x, cc.y);
	return 0;
}