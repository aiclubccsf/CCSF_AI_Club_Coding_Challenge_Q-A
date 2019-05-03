# Find how many words of input n exists in a string
# rat
''' Happy
AI Club
Practice
 Fun
 '''
# 2 'ai's exists


def findWordsInString(wordToFind, strToSearch):
    count = []
    strToSearch = strToSearch.lower()
    wordToFind = wordToFind.lower()
    for i in wordToFind:
        counter = strToSearch.count(i)
        count.append(counter)

    print(count)
    print(count[1] % count[0])



findWordsInString("py", "happy AI Club Practice fun")

