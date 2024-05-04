class Solution {
public:
    bool validTicTacToe(vector<string>& board) {
    char grid[3][3];
	int x=0,o=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			grid[i][j]=board[i][j];
			if (grid[i][j]=='X') x++;
			else if (grid[i][j]=='O') o++;
		}
	}


	bool ok1=false,ok2=false;
	int c1=0,c2=0;
	for(int i=0;i<3;i++){
	
		for(int j=0;j<3;j++){
			if (grid[i][j]=='X')c1++;
		}

		for(int j=0;j<3;j++){
			if (grid[i][j]=='O')c2++;
		}
		if (c1==3) ok1=1;
		if (c2==3) ok2=1;
		c1=0;c2=0;
	}
	// cout<<ok1<<" "<<ok2<<endl;
	c1=0;c2=0;
	for(int j=0;j<3;j++){
		for(int i=0;i<3;i++){
			if (grid[i][j]=='X')c1++;
		}

		for(int i=0;i<3;i++){
			if (grid[i][j]=='O')c2++;
		}
		if (c1==3) ok1=1;
		if (c2==3) ok2=1;
		c1=0;c2=0;
	}
	// cout<<ok1<<" "<<ok2<<endl;
	if (grid[0][0]=='X' && 'X'==grid[1][1] && grid[2][2]=='X') ok1=1; 
	if (grid[0][2]=='X' && 'X'==grid[1][1] && grid[2][0]=='X') ok1=1;

	if (grid[0][0]=='O' && 'O'==grid[1][1] && grid[2][2]=='O') ok2=1; 
	if (grid[0][2]=='O' && 'O'==grid[1][1] && grid[2][0]=='O') ok2=1;
	// cout<<x<<" "<<o<<" "<<c1<<" "<<c2<<endl;
	// cout<<x<<" "<<o<<" "<<ok1<<" "<<ok2<<endl;
	if ((x-o)>1 || o>x) return false;
	else if (ok1 && ok2) return false;
	else if (ok1 && x==o+1) return true;
	else if (ok2 && x==o) return true;
	else if (!ok1 && !ok2) return true;
 	else return false;
        }
};