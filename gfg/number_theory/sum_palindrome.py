#User function Template for python3

class Solution:
    def isDigitSumPalindrome(self,N):
        #code here
        temp,x =0,0
        while(N>0):
            x=N%10
            temp+=x
            N=N//10
        
        dup = str(temp)
        if temp==int(dup[::-1]):
            return 1
        else:
            return 0


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        ob=Solution()
        print(ob.isDigitSumPalindrome(N))
# } Driver Code Ends