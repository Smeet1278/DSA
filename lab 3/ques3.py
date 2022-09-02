class Matrix:
    def __init__(self, nrows, ncols):
        self.rows = nrows
        self.cols = ncols
        self.matrix = [[0 for i in range(ncols)] for i in range(nrows)]

    def numRows(self):
        print(self.rows)

    def numCols(self):
        print(self.cols)

    def getItem(self, i, j):
        if(i >= 0 and j >= 0 and i < self.rows and j < self.cols):
            print(self.matrix[i][j])
        else:
            raise ValueError

    def setItem(self, i, j, val):
        if(i >= 0 and j >= 0 and i < self.rows and j < self.cols):
            self.matrix[i][j] = val
        else:
            raise ValueError

    def scaleBy(self, val):
        for i in range(self.rows):
            for j in range(self.cols):
                self.matrix[i][j] = (self.matrix[i][j])*val

    def transpose(self):
        newMatrix = []
        for i in range(self.cols):
            l = [0]*(self.rows)
            for j in range(self.rows):
                l[j] = self.matrix[j][i]
            newMatrix.append(l)
        for i in range(self.cols):
            print(newMatrix[i])

    def display(self):
        for i in range(self.rows):
            for j in range(self.cols):
              print(self.matrix[i][j],end=" ")
            print()

    def add(self, rhsMatrix):
        if(self.rows == len(rhsMatrix) and self.cols == len(rhsMatrix[0])):
            for i in range(self.rows):
                for j in range(self.cols):
                    rhsMatrix[i][j] = rhsMatrix[i][j] + self.matrix[i][j]
            
            for i in range(self.rows):
                print(rhsMatrix[i])

        else:
            raise ValueError

    def subtract(self, rhsMatrix):
        if(self.rows == len(rhsMatrix) and self.cols == len(rhsMatrix[0])):
            for i in range(self.rows):
                for j in range(self.cols):
                    rhsMatrix[i][j] = rhsMatrix[i][j] - self.matrix[i][j]
            
            for i in range(self.rows):
                print(rhsMatrix[i][j])

        else:
            raise ValueError

    def multiply(self, rhsMatrix):
        if(self.cols == len(rhsMatrix)):
            newMatrix = [[0 for i in range(self.rows)] for i in range(len(rhsMatrix[0]))]
            for i in range(self.rows):
                for j in range(len(rhsMatrix[0])):
                    s = 0
                    for k in range(self.cols):
                        s = s + ((self.matrix[i][k])*(rhsMatrix[k][j]))
                    newMatrix[i][j] = s

            for i in range(self.rows):
                print(newMatrix[i])
        
        else:
            raise ValueError


Mat = Matrix(3,3)
Mat.setItem(0,0,5)
Mat.setItem(1,1,5)
Mat.setItem(2,2,5)

Mat.getItem(1,2)
Mat.display()
