while (true) {
  // line 1
  const current_left_wheel_velocity = measure_current_left_wheel_velocity();
  // line 1
  const current_right_wheel_velocity = measure_current_right_wheel_velocity();
  // line 1
  const current_wheel_velocity_error = current_left_wheel_velocity - current_right_wheel_velocity;
  
  // line 2
  const current_control_signal = previous_control_signal + (K1 * current_wheel_velocity_error) - (K2 * previous_wheel_velocity_error)

  // line 3
  const target_left_wheel_velocity = target_car_velocity - current_control_signal;

  // line 4
  const target_right_wheel_velocity = target_car_velocity + current_control_signal;

  
  // line 5
  const current_left_wheel_error = target_left_wheel_velocity - current_left_wheel_velocity;
  // line 6
  const PWM_assign_to_the_left_wheel = PWM_previously_assigned_to_the_left_wheel + (K3 * current_left_wheel_error) - (K4 * previous_left_wheel_error)

  
  // line 7
  const current_right_wheel_error = target_right_wheel_velocity - current_right_wheel_velocity;
  // line 8
  const PWM_assign_to_the_right_wheel = PWM_previously_assigned_to_the_right_wheel + (K3 * current_right_wheel_error) - (K4 * previous_right_wheel_error)
}
