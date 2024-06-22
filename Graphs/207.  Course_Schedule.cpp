// problem link -> https://leetcode.com/problems/course-schedule/

bool topologicalsortcheck(unordered_map<int, vector<int>> &adj, int n, vector<int> & indegree){
        queue <int> que; 
        int count =0;

        for(int i = 0; i<n ;i++)
        {
            if(indegree[i]==0){
                que.push(i);
                count++;
            }
        }

        while(!que.empty()){
            int u = que.front();
            que.pop();

            for(int & v : adj[u]){

                indegree[v]--;
                if(indegree[v]==0){
                    que.push(v);
                    count++;
                }
            }
        }

        if(count == n)
        {
            return true;
        }

        return false;
    }

    bool canFinish(int numcourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> adj;
        vector<int> indegree(numcourses, 0);

        for(auto &vec : prerequisites){
            int a = vec[0];
            int b = vec[1];

            //b-->a

            adj[b].push_back(a);

            indegree[a]++;
        }

        return topologicalsortcheck(adj , numcourses, indegree);
    }
