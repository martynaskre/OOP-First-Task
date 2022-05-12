# OOP First Task

This task was created by Martynas Skrebė.

## Running application

```bash
# for debug build
cmake --build "cmake-build-debug" --target 1_uzd

# for release build
cmake --build "cmake-build-release" --target 1_uzd
```

## Benchmarking results

Benchmarks where performed on 2021 Macbook Pro 14 with M1 Pro (10 CPU core variant) chip and 16GB RAM.

### std::vector
![std::vector](benchmarks/benchmark-vector.png?raw=true "std::vector")

### std::deque
![std::deque](benchmarks/benchmark-deque.png?raw=true "std::deque")

### std::list
![std::list](benchmarks/benchmark-list.png?raw=true "std::list")

## Strategy benchmarks

### First strategy
![First strategy](benchmarks/benchmark-first-strategy.png?raw=true "First strategy")

### Second strategy
![Second strategy](benchmarks/benchmark-second-strategy.png?raw=true "Second strategy")

## Releases

Releases:
  - v2.0
  - v1.5
  - v1.2
  - v1.0 - second strategy
  - v0.5.2 - std::list
  - v0.5.1 - std::deque
  - v0.4.1
  - v0.4
  - v0.3
  - v0.2
  - v0.1.1
  - v0.1