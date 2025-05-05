@interface AudioUnitInterrupListener : NSObject
- (void)startListen:;
- (void)audioSessionInterrupted:;
- (void)stopListen;
+ (id)sharedInstance;
@end
