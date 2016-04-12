#include <WPILib.h>

class Robot : public IterativeRobot {
 public:
  void AutonomousInit() override {}
  void AutonomousPeriodic() override {}
  void TeleopInit() override {}
  void TeleopPeriodic() override {}
};

START_ROBOT_CLASS(Robot);
