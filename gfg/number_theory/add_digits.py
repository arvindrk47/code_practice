class Solution:
    def countd(self, n):
        temp,x=0,0
        while(n>0):
            x=n%10
            temp+=x
            n=n//10
        return temp
    def addDigits(self, num: int) -> int:
        n = num
        while(n>9):
            n=self.countd(n)
        return n
        