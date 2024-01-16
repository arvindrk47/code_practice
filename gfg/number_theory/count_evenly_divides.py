#User function Template for python3


class Solution:
    
    def evenlyDivides (self, N):
        # code here
        ct=0
        num=N
        while(num>0):
            temp = num%10
            num=num//10
            if temp==0: continue
            if N%temp == 0:
                ct+=1
        
        return ct


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
       

        ob = Solution()
        print(ob.evenlyDivides(N))
# } Driver Code Ends