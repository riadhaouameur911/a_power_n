# 🔁 Power Program in C

## 📌 Description

This C program calculates the power of a number using **recursion**.

The program calculates:

```text
aⁿ
```

For example:

```text
5³ = 5 × 5 × 5 = 125
```

---

## 🧠 Concepts Used

- Recursion in C
- Functions
- Conditional statements
- Return values
- Mathematical operations

---

## ⚙️ Function

### `power(int a, int n)`

The `power` function calculates `a` raised to the power of `n` using recursion.

```c
int power(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return power(a, n - 1) * a;
}
```

### 🔄 How Recursion Works

For:

```text
power(5, 3)
```

The function executes:

```text
power(5, 3)
→ power(5, 2) × 5
→ power(5, 1) × 5 × 5
→ power(5, 0) × 5 × 5 × 5
→ 1 × 5 × 5 × 5
→ 125
```

The **base case** is:

```c
if (n == 0)
{
    return 1;
}
```

This stops the recursion.

---

## 🚀 Program Flow

1. Initialize the base:

```c
a = 5;
```

2. Initialize the exponent:

```c
n = 3;
```

3. Call:

```c
power(a, n)
```

4. Calculate the result recursively.

5. Print the result.

---

## 🖥️ Sample Output

```text
power(5,3) = 125
```

---

## 💻 Complete Code

```c
#include <stdio.h>

int power(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return power(a, n - 1) * a;
}

int main()
{
    int a = 5;
    int n = 3;

    printf("power(%d,%d) = %d", a, n, power(a, n));

    return 0;
}
```

---

## ▶️ How to Compile and Run

### Compile

```bash
gcc power.c -o power
```

### Run

On Linux/macOS:

```bash
./power
```

On Windows:

```bash
power.exe
```

---

## 📁 File Structure

```text
power/
│
├── power.c
└── README.md
```

---

## 💡 Important Note

The condition must use `==` for comparison:

```c
if (n == 0)
```

Not:

```c
if (n = 0)
```

`=` assigns a value, while `==` compares two values.

---

## 👨‍💻 Author

- **AOUAMEUR RIADH**
