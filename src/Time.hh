#pragma once

#include <stdint.h>
#include <sys/time.h>

#include <string>

namespace phosg {

uint64_t now();

std::string format_time(uint64_t t);
std::string format_time_natural(uint64_t t);
std::string format_time_natural(struct timeval* tv = nullptr);
std::string format_duration(uint64_t usecs, int8_t subsecond_precision = -1);

struct timeval usecs_to_timeval(uint64_t usecs);
uint64_t timeval_to_usecs(struct timeval& tv);

} // namespace phosg
