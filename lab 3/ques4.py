class LifeGrid:
    def __init__(self, nrows, ncols):
        self.rows = nrows
        self.cols = ncols
        self.grid = [[0 for i in range(ncols)] for i in range(nrows)]

    def numRows(self):
        print(self.rows)

    def numCols(self):
        print(self.cols)

    def configure(self, coordList):
        x1, y1 = coordList[0][0], coordList[0][1]
        x2, y2 = coordList[1][0], coordList[1][1]

        for i in range(self.rows):
            for j in range(self.cols):
                if(i == x1 and j == y1):
                    self.grid = 1
                elif(i == x2 and j == y2):
                    self.grid = 1
                else:
                    self.grid = 0
    

    def clearCell(self, i, j):
        if(i >= 0 and j >= 0 and i < self.rows and j < self.cols):
            self.grid[i][j] = 0

        else:
            raise ValueError

    def setCell(self, i, j):
        if(i >= 0 and j >= 0 and i < self.rows and j < self.cols):
            self.grid[i][j] = 1

        else:
            raise ValueError

    def isLiveCell(self, i, j):
        if(i >= 0 and j >= 0 and i < self.rows and j < self.cols):
            if(self.grid[i][j] == 1):
                return True
  
            return False
        
        else:
            return False

    def numLiveNeighbours(self, i, j):
        c = 0
        lst = [(i+1, j), (i+1, j+1), (i+1, j-1),(i-1, j),
            (i-1, j+1), (i-1, j-1), (i, j+1 ), (i, j-1)] 
        for i in range(len(lst)):
            if(LifeGrid.isLiveCell(lst[i][0], lst[i][1])):
                c = c + 1
        return c
        
lfgrid = LifeGrid(4, 5)
lfgrid.isLiveCell(2, 0)
lfgrid.numLiveNeighbours(1, 0)