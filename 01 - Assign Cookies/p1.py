def findContentChildren(g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """

        g.sort()
        s.sort()
        
        i=0
        j=0
        n=len(g)
        m=len(s)
        ans = 0

        while (i<n) and (j<m):
            if g[i] <= s[j]:
                ans += 1
                i += 1
            j += 1
        
        return ans


if __name__=='__main__':
    g = [1,2,3,1]
    s = [1,1]

    print("cookies assign = ", findContentChildren(g,s))