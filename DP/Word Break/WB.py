class WB:
    @staticmethod
    def check(str):
        dictionary = ["mobile", "samsung", "sam", "sung", "man", "mango", "icecream", "and", "go", "i", "like", "ice", "cream"]

        n = len(str)
        if n==0:
            return True

        wb = [False] * (n+1)

        for i in range(1, n+1):
            if wb[i] == False and str[0:i] in dictionary:
                wb[i] = True

            if wb[i]:
                if i == n:
                    return True
                for j in range (i+1, n+1):
                    if wb[j] == False and str[i:j] in dictionary:
                        wb[j] = True

                    if j == n and wb[j] == True:
                        return True

        return False

print(WB.check('iliked'))