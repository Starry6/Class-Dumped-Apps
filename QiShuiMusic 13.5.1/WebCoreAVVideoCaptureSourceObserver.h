@interface WebCoreAVVideoCaptureSourceObserver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)disconnect;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)captureOutput:didOutputSampleBuffer:fromConnection:;
- (id)initWithCallback:;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)deviceConnectedDidChange:;
- (void)sessionRuntimeError:;
- (void)beginSessionInterrupted:;
- (void)endSessionInterrupted:;
@end
