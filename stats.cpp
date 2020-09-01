#include "stats.h"
#include <vector>
using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& dataSet) {
    
    Stats params;

    if (dataSet.empty())
    {
        params.max = NAN;
        params.min = NAN;    
        params.average = NAN;
        return params;
    }

    params.max = *max(dataSet.begin(), dataSet.end());
    params.min = *min(dataSet.begin(), dataSet.end()); 
    float sum=0;   
    params.average = (float)sum/dataSet.size();
    return params;
}
