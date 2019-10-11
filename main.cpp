#include "src/arff_parser.h"

int main() {
  ArffParser ap = ArffParser("../cases/case4.arff");
  auto ap_data = ap.parse();
  return 0;
}
