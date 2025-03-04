varInt = int(1)
varFloat = float(1)
varStr = str(1)
varBool = bool(1)
varList = list()
varTuple = tuple()

typesDict = {
    type(varInt): varInt,
    type(varFloat): varFloat,
    type(varStr): varStr,
    type(varBool): varBool,
    type(varList):  varList,
    type(varTuple): varTuple
}
print("----------  V A L U E S  ----------")
print(typesDict)

print("----------  T Y P E S  ----------")
print(type(varInt))
print(type(varFloat))
print(type(varStr))
print(type(varBool))
print(type(varList))
print(type(varTuple))

print("----------  OTHERS TO INT  ----------")
print(type(int(varFloat)))
print(type(int(varStr)))
print(type(int(varBool)))
#print(type(int(varList)))
#print(type(int(varTuple)))

print("----------  OTHERS TO FLOAT  ----------")
print(type(float(varInt)))
print(type(float(varStr)))
print(type(float(varBool)))
#print(type(float(varList)))
#print(type(float(varTuple)))

print("----------  OTHERS TO STR  ----------")
print(type(str(varInt)))
print(type(str(varFloat)))
print(type(str(varBool)))
print(type(str(varList)))
print(type(str(varTuple)))

print("----------  OTHERS TO BOOL  ----------")
print(type(bool(varInt)))
print(type(bool(varFloat)))
print(type(bool(varStr)))
print(type(bool(varList)))
print(type(bool(varTuple)))

print("----------  OTHERS TO LIST  ----------")
#print(type(list(varInt)))
#print(type(list(varFloat)))
print(type(list(varStr)))
#print(type(list(varBool)))
print(type(list(varTuple)))

print("----------  OTHERS TO TUPLE  ----------")
#print(type(tuple(varInt)))
#print(type(tuple(varFloat)))
print(type(tuple(varStr)))
#print(type(tuple(varBool)))
print(type(tuple(varList)))