@interface BDTrackerSessionTracer : NSObject
@property (nonatomic) q startTimestamp;
@property (nonatomic) BOOL inBackground;
@property (nonatomic) q applicationState;
@property (nonatomic) BOOL start;
- (void)finishLaunching;
- (void)startDuration;
- (void)stopDuration;
- (void)traceApplicationState;
- (void)becomeActive;
- (void)terminate;
- (void)setStart:;
- (id)init;
- (void)dealloc;
- (BOOL)start;
- (void)setApplicationState:;
- (long long)applicationState;
- (long long)startTimestamp;
- (void)enterBackground;
- (void)setStartTimestamp:;
- (void)enterForeground;
- (void)resignActive;
- (BOOL)inBackground;
- (void)setInBackground:;
+ (id)sharedInstance;
@end
