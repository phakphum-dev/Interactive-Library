#include "dining_car.h"
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

const int CALLS_CNT_LIMIT = 90;

int N, A, B;
int calls_cnt;

void quit(const char* message) {
  printf("%s\n", message);
  exit(0);
}

int calc_dist(int i){
	return std::min(std::abs(i-A),std::abs(i-B));
}

int compare_cars(int i, int j){
	calls_cnt++;
	if (calls_cnt > CALLS_CNT_LIMIT)
		quit("Too many calls");
	if (i<1 || i>N || j<1 || j>N)
		quit("Invalid argument");
	
	int dist_i = calc_dist(i);
	int dist_j = calc_dist(j);
	
	if(dist_i < dist_j)
		return -1;
	if(dist_i == dist_j)
		return 0;
	return 1;
}
	
int main() {
	scanf("%d%d%d",&N, &A, &B);
	std::pair<int, int> P = locate_dining_cars(N);
	printf("%d %d %d\n", P.first, P.second, calls_cnt);
	
	return 0;
}

