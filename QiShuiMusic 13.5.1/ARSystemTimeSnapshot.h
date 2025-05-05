@interface ARSystemTimeSnapshot : NSObject
@property (nonatomic) double upTime;
@property (nonatomic) double upTimeIncludingSleep;
@property (nonatomic) double upTimeIncludingSleepAndDriftCorrection;
- (id)init;
- (double)upTime;
- (id)timeSinceSnapshot:;
- (id)initWithUpTime:upTimeIncludingSleep:upTimeIncludingSleepAndDriftCorrection:;
- (double)upTimeIncludingSleep;
- (double)upTimeIncludingSleepAndDriftCorrection;
+ (id)timeSinceSnapshot:;
@end
