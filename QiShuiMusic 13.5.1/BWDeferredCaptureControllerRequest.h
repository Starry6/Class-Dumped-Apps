@interface BWDeferredCaptureControllerRequest : BWStillImageProcessorControllerRequest
@property (nonatomic) NSInteger err;
- (BOOL)readyForProcessing;
- (int)err;
- (void)setErr:;
@end
