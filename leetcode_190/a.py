if(len(sentence)==0 or len(searchWord)==0):
            return 0
        s=sentence.split(' ')
        count=0
        k=1
        for i in s:
            num=0
            for x in range(len(searchWord)):
                if len(i)>=len(searchWord):
                    if searchWord[x]==i[x]:
                        #print(searchWord[x],' ',sentence[x])
                        num=num+1
            if num==len(searchWord):
                count=count+1
                break
            k=k+1
        #print(len(i))
        if(k==len(s)+1):
            return -1
        return k