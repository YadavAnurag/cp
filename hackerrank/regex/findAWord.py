import re

n = int(input())
st = '\n'.join(['*'+input().strip().replace('_','')+'*' for _ in range(n)])
for _ in range(int(input())):
    wd = input().strip()
    reg = r'(?<=[\W])'+ wd +'(?=[\W])'
    m = re.findall(reg,st)
    print(len(m))