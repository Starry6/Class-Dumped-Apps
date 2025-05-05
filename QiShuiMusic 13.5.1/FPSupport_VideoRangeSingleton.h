@interface FPSupport_VideoRangeSingleton : NSObject
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)postNotification;
+ (id)sharedFPSupportSingleton;
@end
