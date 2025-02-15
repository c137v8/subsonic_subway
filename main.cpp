#include<bits/stdc++.h>
#include <fstream>
#include <limits>

int main(int argc, char * argv[]) {
  // Open the input file
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <filename>\n";
    return 1;
  }
  std::ifstream file(argv[1]);
  if (!file) {
    std::cerr << "Error: Could not open file " << argv[1] << "\n";
    return 1;
  }

  // Declaring variables that will be used
  std::string line;
  int starttime, endtime;
  int test_case = 0;
  double minspeed = 0;
  double maxspeed = std::numeric_limits < double > ::max();
  double dt = 0;
  // Itirate through lines of the input file
  while (std::getline(file, line)) {
    try {

      int number_test_cases = std::stod(line);
      while (std::getline(file, line)) {
        int number_of_platforms = std::stod(line);
        double distance = 0;
        minspeed = 0;
        maxspeed = std::numeric_limits < double > ::infinity();
        for (int i = 0; i < number_of_platforms; i++) {
          distance++;
          std::getline(file, line);
          std::stringstream ss(line);
          ss >> starttime >> endtime;
        // Use distance time formula to calulate the requried speed to reach the platforms

        // Edge case if start time is 0
          if (starttime == 0) {
            dt = std::numeric_limits < double > ::infinity();
          } else {
            dt = distance / starttime;
          }

            minspeed = std::max(minspeed, distance / endtime);
            maxspeed = std::min(maxspeed, dt);
          if (minspeed > maxspeed) {
            // Set minspeed to -1 if no possible speed can allow sonic to deliver sandwhiches
            minspeed = -1;
            break;
          }
        }
        test_case++;
        std::cout << "Case #" << test_case << ": " << minspeed << std::endl;

      }
    } catch (const std::invalid_argument & e) {
      std::cerr << "Invalid input (not a number): " << line << std::endl;
    }
  }
  // Close the file
  file.close();

  return 0;
}