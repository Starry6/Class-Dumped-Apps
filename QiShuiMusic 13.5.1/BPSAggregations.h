@interface BPSAggregations : NSObject
+ (id)min;
+ (id)max;
+ (id)count;
+ (id)avg;
+ (id)sum;
+ (id)approximateDistinctCount;
+ (id)approxPercentile;
+ (id)approxPercentileWithDigestCapacity:;
@end
