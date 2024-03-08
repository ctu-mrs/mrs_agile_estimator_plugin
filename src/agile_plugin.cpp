#include <mrs_uav_state_estimators/estimators/state/state_generic.h>

namespace agile
{

const char estimator_name[] = "agile";
const bool is_core_plugin = false;

class Agile : public mrs_uav_state_estimators::StateGeneric {
public:
  Agile() : mrs_uav_state_estimators::StateGeneric(estimator_name, is_core_plugin) {
  }

  ~Agile(void) {
  }
};

}  // namespace agile

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(agile::Agile, mrs_uav_managers::StateEstimator)

