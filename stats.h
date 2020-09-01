#include <vector>

namespace Statistics {

    struct Stats{
        float average, max, min;
    };

    Stats ComputeStatistics(const std::vector<float>& );
}
