@interface IESGurdBackgroundInfo : NSObject
@property (nonatomic) NSDate startTime;
@property (nonatomic) q totalDuration;
@property (nonatomic) BOOL isBackground;
- (BOOL)isBackground;
- (void)start;
- (void)setStartTime:;
- (void)didEnterBackground;
- (id)startTime;
- (void)willEnterForeground;
- (void)setIsBackground:;
- (long long)totalDuration;
- (void).cxx_destruct;
- (void)setTotalDuration:;
+ (id)sharedInstance;
@end
