@interface ZLZVideoDispenser : NSObject
@property (nonatomic) NSMutableSet receivers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addVideoReceiver:;
- (void)cameraControllerCaptureOutput:didOutputSampleBuffer:fromConnection:;
- (void)removeVideoReceiver:;
- (id)init;
- (id)receivers;
- (void).cxx_destruct;
- (void)setReceivers:;
@end
