#include <bits/stdc++.h>
using namespace std;

int a[1010][1010], q[1010], visited[1010], n, i, j, f = 0, r = -1;

void bfs(int v) {
	for(i = 1; i <= n; i++)
		if(a[v][i] && !visited[i])
			q[++r] = i;
	if(f <= r) {
		visited[q[f]] = 1;
		bfs(q[f++]);
	}
}

int main() {
	int v;
	cout << "Enter number of vertices: ";
	cin >> n;
	for(i=1; i <= n; i++) {
		q[i] = 0;
		visited[i] = 0;
	}
	
	cout << "Enter graph : ";
	for(i=1; i<=n; i++) {
		for(j=1;j<=n;j++) {
			cin >> a[i][j];
		}
	}
	
	cout << "Start :";
	cin >> v;
	bfs(v);
	for(i=1; i <= n; i++) {
		if(visited[i])cout << i << " ";
		else {
			cout << "Impossible";
			break;
		}
	}
	return 0;
}
