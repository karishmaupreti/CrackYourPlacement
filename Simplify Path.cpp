class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;

        for(int i=0;i<path.size();i++){
            if(path[i]=='/') continue;

            else {
                string temp="";
                while(i<path.size() && path[i]!='/'){
                    
                    temp+=path[i];
                    i++;
                }
               if(temp==".") continue;
               else if(temp==".."){
                if(st.empty()) continue;
                else st.pop();
               }
                else{
                    st.push(temp);
                }
               }
            }
            string ans="";
            while(!st.empty()){
                ans="/"+st.top()+ans;
                st.pop();
            }
            if(ans.size()==0) return "/";
            return ans;
        
    }
};
