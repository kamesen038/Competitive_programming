import numpy as np
import bisect

def position_in_neg(x):
    # y=n_pos-np.searchsorted(A_pos,x//A_neg,side='right')
    res=0
    for y in x//A_neg:
        res+=n_pos-bisect.bisect_right(A_pos, y)
    return res

def position_in_pos(x):
    # z=np.searchsorted(A_pos,-(-x//A_pos),side='left')
    # w=np.searchsorted(A_neg2,-(-x//A_neg2),side='left')
    res=0
    for y in -(-x//A_pos):
        res+=bisect.bisect_left(A_pos, y)
    for y in -(-x//A_neg2):
        res+=bisect.bisect_left(A_neg2, y)
    tmp=len(A_pos[A_pos**2<x])+len(A_neg2[A_neg2**2<x])
    return (res-tmp)//2

def position(x):
    if x<0:
        return position_in_neg(x)
    elif x==0:
        return n_pos*n_neg
    else:
        return position_in_pos(x)+n_pos*n_neg+(n_pos+n_neg)*n_zero+n_zero*(n_zero-1)//2


def resolve():
    N,K=map(int,input().split())
    A=list(map(int,input().split()))

    A=np.array(A)
    global A_pos,A_neg,A_neg2,n_pos,n_neg,n_zero
    A_pos=np.sort(A[A>0])
    A_neg=np.sort(A[A<0])
    A_neg2=-A_neg[::-1]
    n_pos=len(A_pos)
    n_neg=len(A_neg)
    n_zero=N-n_pos-n_neg


    l=-pow(10,18)
    r=pow(10,18)
    while(r-l>1):
        mid=(l+r)//2
        if position(mid)<K:
            l=mid
        else:
            r=mid
    print(l)

if __name__ == "__main__":
    resolve()