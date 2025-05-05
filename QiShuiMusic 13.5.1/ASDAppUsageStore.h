@interface ASDAppUsageStore : NSObject
@property (nonatomic) ASDAppUsageStats leastUsageCount;
@property (nonatomic) ASDAppUsageStats leastUsageTime;
@property (nonatomic) ASDAppUsageStats topUsageCount;
@property (nonatomic) ASDAppUsageStats topUsageTime;
@property (nonatomic) NSArray usageStats;
@property (nonatomic) BOOL verbose;
- (void).cxx_destruct;
- (BOOL)verbose;
- (void)setVerbose:;
- (id)initWithDurationInDays:bundleIDs:;
- (id)initWithDurationInDays:bundleIDs:includeExtensionUsage:;
- (id)calcluateUsageFromDate:endDate:appMetadata:streams:;
- (id)calcluateUsageFromDate:endDate:bundleIDs:;
- (id)leastUsageCount;
- (id)leastUsageTime;
- (id)topUsageCount;
- (id)topUsageTime;
- (id)usageStats;
+ (id)allUsageForStreams:fromDate:endDate:error:;
@end
