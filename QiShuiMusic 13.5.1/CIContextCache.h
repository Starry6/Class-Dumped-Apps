@interface CIContextCache : NSObject
+ (void)resetStatistics;
+ (long long)peakNonVolatileSize;
+ (long long)currentNonVolatileSize;
+ (long long)countAllocated;
+ (float)fillTime;
+ (id)peakNonVolatileList;
@end
