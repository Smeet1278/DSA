class Array2D():
    def __init__(self, nrows, ncols):
        self.rows = nrows
        self.cols = ncols
        self.matrix = {}
        self.defaultval = 0
        
    def numRows(self):
        print(self.rows)

    def numCols(self):
        print(self.cols)

    def setItem(self, i, j, val):
        if(i >= 0 and j >= 0 and i < self.rows and j < self.cols):
            self.matrix[(i, j)] = val
        else:
            raise ValueError

    def getItem(self, i, j):
        if(i >= 0 and j >= 0 and i < self.rows and j < self.cols):
            try:
                print(self.matrix[(i, j)])
            except:
                print(self.defaultval)
        else:
            raise ValueError

    def clear(self, val):
        self.defaultval = val
        self.matrix = {}

    def display(self):
        for i in range(self.rows):
            for j in range(self.cols):
                try:
                    print(self.matrix[(i, j)], end = " ")
                except:
                    print(self.defaultval, end = " ")
            print()

grid = Array2D(5, 5)
grid.setItem(1, 2, 5)
grid.getItem(2, 2)
grid.display()


