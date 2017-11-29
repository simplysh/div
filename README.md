# div
Simple CLI utility to get the greatest common denominator of a set of numbers

### Installation
Clone the repo and run

```
make
```

### Usage
Call `div` along with your set of numbers:

```
div 800 600
# 200
```

To get all the common denominators, run with `-a` as the **first** argument:

```
div -a 800 600 1920 1080
# 1 2 4 5 8 10 20 40
```
