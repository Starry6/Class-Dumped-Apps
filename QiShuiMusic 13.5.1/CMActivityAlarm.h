@interface CMActivityAlarm : NSObject
@property (nonatomic) double duration;
@property (nonatomic) I trigger;
@property (nonatomic) double activityDuration;
- (void)dealloc;
- (void)setTrigger:;
- (unsigned int)trigger;
- (void)setDuration:;
- (BOOL)isValid;
- (double)duration;
- (void)invalidate;
- (void)fire;
- (id)initWithTrigger:duration:onQueue:withHandler:;
- (id)initWithTrigger:duration:onRunLoop:withHandler:;
- (void)setActivityDuration:;
- (double)activityDuration;
+ (BOOL)activityAlarmAvailable;
+ (id)activityAlarmInfo;
@end
