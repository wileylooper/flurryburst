#include <stdint.h>

struct flurryBurstState64 {
  uint64_t a;
  uint64_t b;
  uint64_t c;
  uint64_t d;
  uint64_t e;
  uint64_t f;
};

struct flurryBurstState32 {
  uint32_t a;
  uint32_t b;
  uint32_t c;
  uint32_t d;
  uint32_t e;
  uint32_t f;
};

struct flurryBurstState8 {
  uint8_t a;
  uint8_t b;
  uint8_t c;
  uint8_t d;
  uint8_t e;
  uint8_t f;
};

uint64_t flurryBurst64(struct flurryBurstState64 *s) {
  uint64_t mix = (s->a << 25) | (s->a >> 39);

  s->a = s->b;
  s->b = s->e;
  s->c += s->d;
  s->d += s->b;
  s->e = s->f + 111111111111111111;
  s->f = s->c ^ mix;
  return (s->e >> 1) ^ s->f;
}

uint32_t flurryBurst32(struct flurryBurstState32 *s) {
  uint32_t mix = (s->a << 13) | (s->a >> 19);

  s->a = s->b;
  s->b = s->e;
  s->c += s->d;
  s->d += s->b;
  s->e = s->f + 1111111111;
  s->f = s->c ^ mix;
  return (s->e >> 1) ^ s->f;
}

uint8_t flurryBurst8(struct flurryBurstState8 *s) {
  uint8_t mix = (s->a << 3) | (s->a >> 5);

  s->a = s->b;
  s->b = s->e;
  s->c += s->d;
  s->d += s->b;
  s->e = s->f + 111;
  s->f = s->c ^ mix;
  return (s->e >> 1) ^ s->f;
}
