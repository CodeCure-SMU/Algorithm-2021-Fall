# FastIO.py

# Python의 Fast Input은 sys module의 readline 함수 이용
import sys

input = sys.stdin.readline

# 이후는 동일!

a = input() # 한개의 값 입력 받을 때

n, m = map( int, input().split() ) # "1 2" 이런식으로 한줄에 여러 값이 들어올 때 각각의 변수로 매칭

arr = list( map( int, input().split() ) ) # "1 2 3 4 5" 이런식으로 한줄에 배열이 들어올 때 list로 변경

# Python의 Fast output은 없음! 만약 시간초과가 뜬다면 Pypy3로 제출해보시길...
print( a )

print( n, m )

print ( arr )