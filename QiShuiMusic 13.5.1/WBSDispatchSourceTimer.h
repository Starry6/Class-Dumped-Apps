@interface WBSDispatchSourceTimer : NSObject
@property (nonatomic) double interval;
@property (nonatomic) double startDelay;
@property (nonatomic) BOOL repeats;
@property (nonatomic) @? handler;
@property (nonatomic) BOOL valid;
- (void)dealloc;
- (BOOL)repeats;
- (void)schedule;
- (id)handler;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_scheduleTimer;
- (double)interval;
- (id)_initWithStartDelay:interval:repeats:handler:;
- (void)resetFireDate;
- (double)startDelay;
+ (id)scheduledTimerWithInterval:repeats:handler:;
+ (id)scheduledRepeatingTimerWithStartDelay:interval:handler:;
@end
