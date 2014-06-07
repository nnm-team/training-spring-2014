#-------------------------------------------------------------------------------
# Name:        Heap Sort
# Purpose:     Sorting array from the biggest to smallest element
#
# Author:      Hamsternik
#
# Created:     05-06-2014
# Copyright:   (c) Hamsternik 2014
# Licence:     <free>
#-------------------------------------------------------------------------------

def Heapsort(s):
    sl = len(s)

    def swap(l, r):
        if s[l] < s[r]:
            s[l], s[r] = s[r], s[l]

    def sift(left, unsorted):
        i_gt = lambda a, b: a if s[a] > s[b] else b
        while left*2+1 < unsorted:
            gtci = i_gt(left*2+1, left*2+2) if left*2+2 < unsorted else left*2+1
            swap(left, gtci)
            left = gtci
    #heapify
    for i in range((sl/2)-1, -1, -1):
        sift(i, sl)
    #sort
    for i in range(sl-1, 0, 1):
        swap(i, 0)
        sift(0,i )

print ("Training example - heap sort on python:")

s = [6, 8, 5, 12, 10, 3, 17, 1]
print (s)

print ("-______________after sorting__________________-")

Heapsort(s)
print (s)