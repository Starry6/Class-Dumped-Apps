@interface TSPKAdvanceAppStatusTrigger : TSPKDetectTrigger
@property (nonatomic) BOOL detectEnterForeground;
@property (nonatomic) double minAppStatusChangeTime;
@property (nonatomic) double lastTimeInBackground;
- (void)applicationEnterBackground;
- (void)applicationEnterForeground;
- (void)decodeParams:;
- (BOOL)detectEnterForeground;
- (void)executeDetectAction;
- (double)lastTimeInBackground;
- (double)minAppStatusChangeTime;
- (void)setDetectEnterForeground:;
- (void)setLastTimeInBackground:;
- (void)setMinAppStatusChangeTime:;
- (void)dealloc;
- (void)setup;
@end
