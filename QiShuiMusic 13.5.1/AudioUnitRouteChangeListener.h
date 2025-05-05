@interface AudioUnitRouteChangeListener : NSObject
- (void)startListen:;
- (void)audioSessionRouteChange:;
- (void)stopListen;
+ (id)sharedInstance;
@end
