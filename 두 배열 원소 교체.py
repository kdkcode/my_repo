#두 배열 원소 교체문제
n,k=map(int,input().split())
print(f'{n}개의 원소 입력 {k}번 바꾸기 수행')
b=[0]*n
a=[0]*n
print('초기화A->',a)
print('초기화B->',b)

for i in range(n):
  a[i]=int(input(f'입력a{i+1} : '))

for i in range(n):
  b[i]=int(input(f'입력b{i+1} : '))


print('A배열 ->',a)
print('B배열 ->',b)

a.sort()
b.sort(reverse=True)


for i in range(k):
  if a[i]<b[i]:
    a[i],b[i]=b[i],a[i]
  else:
    break

print(sum(a))