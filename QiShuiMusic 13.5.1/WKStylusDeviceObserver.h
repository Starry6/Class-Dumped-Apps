@interface WKStylusDeviceObserver : NSObject
@property (nonatomic) BOOL hasStylusDevice;
- (id)init;
- (void)start;
- (void)stop;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)changeTimerFired:;
- (void)setHasStylusDevice:;
- (void)startChangeTimer:;
- (BOOL)hasStylusDevice;
+ (id)sharedInstance;
@end
