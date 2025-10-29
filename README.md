#### FlurryBurst64

FlurryBurst64 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to PCG64 XSH RR, PCG64 XSH RS, Xoshiro256**, Xoshiro256+ and Xoshiro256++.

It has a period of at least 2²⁵⁶.

Seeding `d` with non-overlapping integers and seeding the remaining state with `0` behaves as a jump function with up to 2⁶⁴ parallel instances that each have a non-overlapping period of at least 2⁶⁴. The first several results from each parallel instance should be skipped.

In non-parallel instances, `d` must be assigned a seed and the remaining state must be seeded with `0`. The first few results from each non-parallel instance should be skipped.

`flurryBurst64` generates and returns a pseudorandom `uint64_t` integer, provided the implementation supports a 64-bit, unsigned integral type for `uint64_t`.

---

#### FlurryBurst32

FlurryBurst32 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to Xoshiro128**, Xoshiro128+ and Xoshiro128++.

It has a period of at least 2¹²⁸.

Seeding `d` with non-overlapping integers and seeding the remaining state with `0` behaves as a jump function with up to 2³² parallel instances that each have a non-overlapping period of at least 2³². The first several results from each parallel instance should be skipped.

In non-parallel instances, `d` must be assigned a seed and the remaining state must be seeded with `0`. The first few results from each non-parallel instance should be skipped.

`flurryBurst32` generates and returns a pseudorandom `uint32_t` integer, provided the implementation supports a 32-bit, unsigned integral type for `uint32_t`.

---

#### FlurryBurst8

FlurryBurst8 is a scaled-down variant of FlurryBurst64 that uses 8-bit integers instead of 64-bit integers.

It has a period of at least 2³².

Seeding `d` with non-overlapping integers and seeding the remaining state with `0` behaves as a jump function with up to 2⁸ parallel instances that each have a non-overlapping period of at least 2⁸. The first several results from each parallel instance should be skipped.

In non-parallel instances, `d` must be assigned a seed and the remaining state must be seeded with `0`. The first few results from each non-parallel instance should be skipped.

`flurryBurst8` generates and returns a pseudorandom `uint8_t` integer, provided the implementation supports an 8-bit, unsigned integral type for `uint8_t`.
