// string reversal
string reverse(string s){
  string x="";
  for(int i=s.length()-1;i>=0;i--){
    x=x+s[i];
  }
  return x;
}
