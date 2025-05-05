@interface CKUploadRequestManagerResponseActionThrottlerMetadata : NSObject
@property (nonatomic) double lastRunTime;
@property (nonatomic) q repeatCount;
@property (nonatomic) Q totalThrottleCount;
- (long long)repeatCount;
- (void)setRepeatCount:;
- (unsigned long long)totalThrottleCount;
- (double)lastRunTime;
- (void)setLastRunTime:;
- (void)setTotalThrottleCount:;
@end
