
def union(array_1, array_2 ):
    a1_U_a2 = []

    for x in array_1:
        a1_U_a2.append(x)
    for y in array_2:   
        a1_U_a2.append(y)

    print(a1_U_a2)

def intersect(array_1, array_2):
    a1_N_a2 = []

    for x in array_1:
        for y in array_2:
            if x == y:
                a1_N_a2.append(x)
    print(a1_N_a2)

ar1 = {1,2,3,4,5,6}
ar2 = {6,7,8,9}

union(ar1, ar2)
intersect(ar1, ar2)
