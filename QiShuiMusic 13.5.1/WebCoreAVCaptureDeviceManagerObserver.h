@interface WebCoreAVCaptureDeviceManagerObserver : NSObject
- (void)disconnect;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)initWithCallback:;
- (void)deviceConnectedDidChange:;
@end
