//
// semver.h
//
// Copyright (c) 2015 Tomas Aparicio
// MIT licensed
//

#ifndef __SEMVER_H
#define __SEMVER_H
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * version struct
 */

typedef struct semver_version_s {
  int major;
  int minor;
  int patch;
  char * stage;
  char * metadata;
  char * prerelease;
  int pr_version[50];
  int pr_version_count;
} semver_t;

/**
 * Set prototypes
 */

semver_t *
semver_new (int major, int minor, int patch);

int
semver_compare (semver_t x, semver_t y);

int
semver_gt (semver_t x, semver_t y);

int
semver_gte (semver_t x, semver_t y);

int
semver_lt (semver_t x, semver_t y);

int
semver_lte (semver_t x, semver_t y);

int
semver_eq (semver_t x, semver_t y);

int
semver_ne (semver_t x, semver_t y);

int
semver_parse (const char *str, semver_t *ver);

int
semver_valid_chars (const char *s, const char *c);

int
semver_parse_int (const char *s);
