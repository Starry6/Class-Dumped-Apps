@interface AWEIMImageTracker : NSObject
@property (nonatomic) q startTime;
@property (nonatomic) AWEIMImageTrackerConfig config;
- (void)finishWithResultType:;
- (void)setConfig:;
- (void)setStartTime:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
- (long long)startTime;
+ (id)trackerWithConfig:;
@end
