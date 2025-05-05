@interface AVSampleBufferVideoOutput : NSObject
@property (nonatomic) <AVSampleBufferVideoOutputPullDelegate> outputDelegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
- (id)init;
- (void)dealloc;
- (id)_weakReference;
- (id)delegateQueue;
- (BOOL)setUpWithOutputSettings:outputSettingsArePixelBufferAttributes:withExceptionReason:;
- (void)setOutputDelegate:queue:;
- (id)outputDelegate;
- (id)_copyPixelBufferForItemTimeWithOptions:itemTimeForDisplay:options:;
- (BOOL)hasNewPixelBufferForSourceTime:;
- (id)copyPixelBufferForSourceTime:sourceTimeForDisplay:;
- (id)copyLastPixelBuffer:;
- (BOOL)_configureWithVideoQueue:;
- (void)_resetLastImageTime;
- (id)_visualContext;
- (void)_dispatchOutputSequenceWasFlushed;
@end
