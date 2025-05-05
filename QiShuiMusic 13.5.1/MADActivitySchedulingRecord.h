@interface MADActivitySchedulingRecord : NSObject
@property (nonatomic) Q activityID;
@property (nonatomic) NSDate startTime;
@property (nonatomic) double duration;
@property (nonatomic) NSInteger exitStatus;
- (void)setStartTime:;
- (id)startTime;
- (void)setDuration:;
- (id)description;
- (double)duration;
- (int)exitStatus;
- (unsigned long long)activityID;
- (void)setActivityID:;
- (void)setExitStatus:;
@end
