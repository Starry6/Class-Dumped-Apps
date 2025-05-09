@interface AWENearbyActivityBubbleResource : AWEBaseApiModel
@property (nonatomic) q activityID;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) q maxRepeatedCount;
@property (nonatomic) q repeatedTimesPerDay;
@property (nonatomic) q delayTimeAfterColdLaunch;
@property (nonatomic) NSString content;
@property (nonatomic) q dayCountPerPeriod;
@property (nonatomic) q timesPerPeriod;
- (long long)timesPerPeriod;
- (long long)dayCountPerPeriod;
- (long long)repeatedTimesPerDay;
- (void)setTimesPerPeriod:;
- (void)setDayCountPerPeriod:;
- (long long)maxRepeatedCount;
- (long long)delayTimeAfterColdLaunch;
- (void)setMaxRepeatedCount:;
- (void)setRepeatedTimesPerDay:;
- (void)setDelayTimeAfterColdLaunch:;
- (id)content;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void)setContent:;
- (void).cxx_destruct;
- (double)startTime;
- (long long)activityID;
- (void)setActivityID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
