#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
  int lenght;
  int width;
  int height;
};

typedef struct box box;

int get_volume(box b) {
	return (b.lenght)*(b.width)*(b.height);
}

int is_lower_than_max_height(box b) {
	int return_value;
    if(b.height<MAX_HEIGHT)
    {
        return_value=1;
    }
    else
    {
        return_value=0;
    }
    return return_value;
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
