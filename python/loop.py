


def loop1(n, m):
    count = 0

    # outer loop
    for i in range(n):

        print("==========================")
        print("outer loop")
        print(f"i: {i+1}")
        print()

        # inner loop
        print("inner loop")
        for j in range(m):
            print(f"j: {j+1}")
            count += 1
        # inner loop end
    # outer loop end

    print()
    print("total number of iterations:")
    print(f"n * m = {n} * {m} = {count}\n")


def loop2(n, m):
    count = 0

    # outer loop
    for i in range(n):
        print("==========================")
        # inner loop
        for j in range(m):
            print(f"i: {i+1} j: {j+1}")
            count += 1
        # inner loop end
    # outer loop end

    print()
    print("total number of iterations:")
    print(f"n * m = {n} * {m} = {count}\n")
    


if __name__ == "__main__":
    n = 10
    m = 10

    #loop1(n,m)
    loop2(n, m)