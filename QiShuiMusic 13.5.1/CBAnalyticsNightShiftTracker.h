@interface CBAnalyticsNightShiftTracker : NSObject
- (BOOL)isStarted;
- (id)init;
- (void)start:;
- (void)stop:isEnabled:;
- (void)update:isEnabled:;
@end
