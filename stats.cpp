#include "stats.h"
#include <vector>
#include <algorithm>
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

    params.max = *max_element(dataSet.begin(), dataSet.end());
    params.min = *min_element(dataSet.begin(), dataSet.end());
    float sum=0;
    for (auto i = dataSet.begin(); i!=dataSet.end(); ++i)
    {
        sum += *i;
    }    
    params.average = (float)sum/dataSet.size();
    return params;
}
