@interface CMActivityManager : NSObject
@property (nonatomic) @? activityHandler;
@property (nonatomic) BOOL activityAvailable;
- (id)init;
- (void)dealloc;
- (void)setActivityHandler:;
- (BOOL)isActivityAvailable;
- (id)activityHandler;
- (long long)overrideOscarSideband:withState:;
- (long long)simulateMotionState:withState:;
- (long long)simulateMotionStateYouthWithState:;
@end
