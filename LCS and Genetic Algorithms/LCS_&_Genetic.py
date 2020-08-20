import random
import time

X = "tofoodie"
Y = "toody"

A = "StringPrueba"
B = "PruebaUnitaria"


def lcs(X, Y, m, n):
    inicio = time.time_ns()
    if m == 0 or n == 0:
        print(time.time_ns() - inicio)
        return 0
    if X[m-1] == Y[n-1]:
        return 1 + lcs(X, Y, m-1, n-1)
    else:
        
        return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n))



def lcsDP(X, Y):
    inicio = time.time_ns()
    m = len(X) 
    n = len(Y) 
  
    L = [[None]*(n + 1) for i in range(m + 1)] 
 
    for i in range(m + 1): 
        for j in range(n + 1): 
            if i == 0 or j == 0 : 
                L[i][j] = 0
            elif X[i-1] == Y[j-1]: 
                L[i][j] = L[i-1][j-1]+1
            else: 
                L[i][j] = max(L[i-1][j], L[i][j-1]) 

    print(time.time_ns() - inicio)
    return L[m][n]   


print ("Length of LCS is ", lcs(X, Y, len(X), len(Y)), " para: " +  X + " y " + Y) 
print("Length of LCS is ", lcsDP(X, Y), " para: " +  X + " y " + Y)
#print ("Length of LCS is ", lcs(A, B, len(A), len(B)), " para: " + A +  " y " + B) 
#print("Length of LCS is ", lcsDP(A, B), " para: " + A +  " y " + B) 


#=============================================================================#
#                        Algoritmo Genético                                   #
#=============================================================================#


class Cromosoma:
    def __init__(self):
        self.genes = []
        self.fitness = 0
        i = 0
        while i < 6:
            self.genes.append(random.randint(0, 1))
            i += 1
        for i in range(len(self.genes)):
            self.fitness += self.genes[i]
        

    def get_genes(self):
        return self.genes
        

class Poblacion:
    def __init__(self, size):
        self.cromosomas = []
        i = 0
        while i < size:
            self.cromosomas.append(Cromosoma())
            i += 1


    def getCromosomas(self):
        return self.cromosomas

    def desplegarPoblacion(self):
        print("----------------------------------------------")
        for indv in self.cromosomas:
            print("Cromosoma: " + str(indv.genes) + "  |  Fitness = " +  str(indv.fitness) + "\n")       
        print("----------------------------------------------")



class AlgoritmoGenetico:
    def mutarPoblacion(self, poblacion):
        combinada = Poblacion(0)
        for indv in poblacion.getCromosomas():
            if indv.fitness < 3:
                self.mutarCromosoma(indv)
        print("----------------------------------------------")
        for indv in poblacion.getCromosomas():
            print("Cromosoma: " + str(indv.genes) + "  |  Fitness = " +  str(indv.fitness) + "\n")       
        print("----------------------------------------------")
        return poblacion 
    
    def mutarCromosoma(self, cromosoma):
        nuevoCromosoma = Cromosoma()
        i = 0
        while i < 6:
            cromosoma.genes[i] = max(nuevoCromosoma.genes[i], cromosoma.genes[i])
            i += 1
        cromosoma.fitness = 0
        for i in range(len(cromosoma.genes)):
            cromosoma.fitness += cromosoma.genes[i]

    def evolucionar(self, poblacion):
        return self.mutarPoblacion(poblacion)



        
        

        

poblacionTotal = Poblacion(10)
poblacionTotal.desplegarPoblacion()
algoritmo = AlgoritmoGenetico()
algoritmo.evolucionar(poblacionTotal)