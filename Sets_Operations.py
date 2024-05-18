
def union(array_1, array_2 ):
    a1_U_a2 = [] #Uniionized set of set A and B

    for x in array_1:
        a1_U_a2.append(x)
    for y in array_2:   
        a1_U_a2.append(y)

    print(a1_U_a2)

def intersect(array_1, array_2):
    a1_N_a2 = [] #Intesected set of set A and B

    for x in array_1:
        for y in array_2:
            if x == y:
                a1_N_a2.append(x)
    print(a1_N_a2)
    
def compliment(complemant_array,universal_array):
    array_complemant = []#Stores the compliments values
    for x in complimant_array:
        for y in universal_array:
            if x != y:
                array_complemant.append(y)
        break
    print(array_complemant)

universal_array = {1,2,3,4,5,6,7,8,9,10)
array_A = {1,2,3,4,5,6}
arrray_B = {6,7,8,9}

union(array_A , array_B)
intersect(array_A array_B)
compliment(array_B, universal_array)
