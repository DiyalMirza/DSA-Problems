class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        triangle= [[1]]

        for i in range(1, rowIndex+1):
            prev= triangle[-1]
            row=[1]

            for j in range(1, i):
                row.append(prev[j-1]+prev[j])
                

            row.append(1)
            triangle.append(row)

        return triangle[rowIndex]
        