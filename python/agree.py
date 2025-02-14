s = input("Do you agree? ").lower()
# s = s.lower() # everything to lowercase, s is an object

if s in ["y", "yes"]:
    print("Agreed")
elif s in ["n", "no"]:
    print("Not agreed")
