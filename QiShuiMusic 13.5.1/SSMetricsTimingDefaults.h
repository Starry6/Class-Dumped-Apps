@interface SSMetricsTimingDefaults : NSObject
@property (nonatomic) SSCoalescingQueue updateQueue;
@property (nonatomic) NSDictionary cachedValues;
@property (nonatomic) BOOL runningTests;
@property (nonatomic) NSDictionary values;
@property (nonatomic) double sessionDurationLoadURL;
@property (nonatomic) double samplingPercentageUsersLoadURL;
@property (nonatomic) double samplingPercentageCachedResponsesLoadURL;
@property (nonatomic) double sessionDurationPageRender;
@property (nonatomic) double samplingPercentageUsersPageRender;
- (void)setCachedValues:;
- (BOOL)isRunningTests;
- (id)initWithSessionDelegate:;
- (double)samplingPercentageCachedResponsesLoadURL;
- (id)values;
- (double)sessionDurationLoadURL;
- (void)setUpdateQueue:;
- (void).cxx_destruct;
- (id)cachedValues;
- (id)updateQueue;
- (void)update;
- (double)samplingPercentageUsersPageRender;
- (double)sessionDurationPageRender;
- (double)samplingPercentageUsersLoadURL;
- (void)setRunningTests:;
+ (id)sharedInstance;
+ (id)sharedInstanceWithSessionDelegate:;
@end
