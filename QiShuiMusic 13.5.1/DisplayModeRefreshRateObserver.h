@interface DisplayModeRefreshRateObserver : NSObject
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (int)updateHDMILatencyOnCoreAnimation:;
- (double)readHDMILatencyFromCoreAnimation;
@end
