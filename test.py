import os

d = os.listdir("./train")
print(len(d))
with open("train.txt","w") as f:
    for i in d:
        f.writelines("./train/"+i+"\n")
