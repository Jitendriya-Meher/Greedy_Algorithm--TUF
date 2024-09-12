def lemonadeChange( bills):
        """
        :type bills: List[int]
        :rtype: bool
        """
        rs5 = 0
        rs10 = 0

        for cost in bills:
            if cost == 5:
                rs5 += 1
            elif cost == 10:
                if rs5 >= 1 :
                    rs10 += 1
                    rs5 -= 1
                else :
                    return False
            else:
                if rs5 >= 1 and rs10 >= 1:
                    rs5 -= 1
                    rs10 -= 1
                elif rs5 >= 3:
                    rs5 -= 3
                else:
                    return False
        
        return True
    
if __name__=='__main__':
    bills = [5,5,20,5,5,10,5,10,5,20]
    print(" bill : ", lemonadeChange(bills))