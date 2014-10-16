// This file is auto-generated from bandit.idl(0.6.3-32-g70e4707) with jenerator version 0.5.4-224-g49229fa/feature/bandit
// *** DO NOT EDIT ***

#ifndef JUBATUS_SERVER_SERVER_BANDIT_TYPES_HPP_
#define JUBATUS_SERVER_SERVER_BANDIT_TYPES_HPP_

#include <stdint.h>

#include <map>
#include <string>
#include <vector>
#include <utility>

#include "jubatus/core/fv_converter/datum.hpp"
#include <msgpack.hpp>

namespace jubatus {

struct registered_reward {
 public:
  MSGPACK_DEFINE(trial_count, total_reward);
  int32_t trial_count;
  double total_reward;
  registered_reward() {
  }
  registered_reward(int32_t trial_count, double total_reward)
    : trial_count(trial_count), total_reward(total_reward) {
  }
};

}  // namespace jubatus

#endif  // JUBATUS_SERVER_SERVER_BANDIT_TYPES_HPP_
