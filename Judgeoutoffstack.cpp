//1.判断出栈的合法性

 bool IsPopOrder(vector<int> pushV,vector<int> popV)
{
    if(pushV.size() == 0) //错误输入
    {
        return false;
    }
    stack<int> st;
    int j = 0;
    for(int i = 0; i < pushV.size(); i++)
    {
        st.push(pushV[i]);
        while(!st.empty() && st.top() == popV[j])
        {
            st.pop();
            j++;
        }
    }
    if(st.empty())
    {
        return true;
    }
    return false;
}
