/*
 * 所有的适配器都要求容器具有添加和删除的能力以及访问尾元素的能力,因此适配器不能构造在array上,
 * 也不能构造在forward_list上!
 *
 * stack:栈适配器,只要求push_back,pop_back和back操作,因此可以使用除了array和forward_list之外的任何容器来构造.
 * queue:队列适配器,要求back,push_back,front和push frong,因此可以使用list或queue之上,但不能用于vector.
 * priority_queue除了front push_back 和pop_back操作之外还要求具备随机访问的能力,因此可以构造于vector或deque之上,当不能基于list构造.
 *
 *
 * 
 * */

#include <stack>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
#include <vector>
#include <forward_list>
using namespace std;
int main(){
	stack<int> intStack;//空栈
	//填满栈
	for(size_t ix = 0;ix!=10;++ix){
		intStack.push(ix);
	}
	while(!intStack.empty()){
		int value = intStack.top();
		intStack.pop();
	}
}
