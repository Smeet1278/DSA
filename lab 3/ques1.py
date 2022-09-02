class Array2D():
    def __init__(self, r, c):
        self.rows = r
        self.cols = c
        self.listoflists = [[0 for i in range(c)] for j in range(r)]
        
    def setItem(self, i, j, val):
        self.listoflists[i][j] = val
        
    def getItem(self, i, j):
        print(self.listoflists[i][j])
        
    def numRows(self):
        print(self.rows)
        
    def numCols(self):
        print(self.cols)
        
    def clear(self,value):
        r = self.rows
        c = self.cols
        for i in range(r):
          for j in range(c):
            self.listoflists[i][j] = value
        print()

    def display(self):
        r = self.rows
        c = self.cols
        for i in range(r):
            for j in range(c):
                print(self.listoflists[i][j], end=" ")
            print()
            
p = Array2D(5, 5)
p.display()
p.setItem(3, 2, 5)
p.setItem(2, 2, 5)
p.setItem(1, 2, 5)
p.getItem(3, 2)
p.display()  
p.clear(5)  
p.display()
