

Betrayed_n,Betrayed_k = 0,0
Betrayed_RIP=0

Betrayed_LIVE = [True for y in range(1,50)]
Betrayed_WTF=False

Betrayed_n = input("Tell me your n : ")

try:
    Betrayed_n = int(Betrayed_n)
except:
    print("INVALID_INPUT")
    exit(1)

if(Betrayed_n <= 0 or Betrayed_n > 1000000):
    print("INVALID_INPUT")
    exit(1)

Betrayed_k = input("Tell me your k : ")

try:
    Betrayed_k = int(Betrayed_k)
except:
    print("INVALID_INPUT")
    exit(1)

if(Betrayed_k <= 0 or Betrayed_k > 40):
    print("INVALID_INPUT")
    exit(1)


Betrayed_RIP = input("Tell me your pos of poison : ")

try:
    Betrayed_RIP = int(Betrayed_RIP)
except:
    print("INVALID_INPUT")
    exit(1)

if(Betrayed_RIP <= 0 or Betrayed_RIP > Betrayed_n):
    print("INVALID_INPUT")
    exit(1)

    


def Get_n():
    
    global Betrayed_n,Betrayed_k,Betrayed_RIP,Betrayed_LIVE,Betrayed_WTF
    
    return Betrayed_n


def Get_k():
    
    global Betrayed_n,Betrayed_k,Betrayed_RIP,Betrayed_LIVE,Betrayed_WTF
   
    return Betrayed_k


def Taste(p:int,g:int):

    global Betrayed_n,Betrayed_k,Betrayed_RIP,Betrayed_LIVE,Betrayed_WTF
    

    if(Betrayed_WTF or p > Betrayed_k or g > Betrayed_n):
        print("WTF M8")
        exit(1)
    
    if(g==Betrayed_RIP):
        Betrayed_LIVE[p] = False


def Next_Day():

    global Betrayed_n,Betrayed_k,Betrayed_RIP,Betrayed_LIVE,Betrayed_WTF

    Betrayed_WTF = True
    return Betrayed_LIVE


def Submit(answer:int):

    global Betrayed_n,Betrayed_k,Betrayed_RIP,Betrayed_LIVE,Betrayed_WTF


    if(answer > Betrayed_n):
        print("WTF M8")
        exit(1)
    elif (answer == Betrayed_RIP):
        print("FOUNDED P")
        exit(0)
    else:
        print("DIED")
        exit(0)





