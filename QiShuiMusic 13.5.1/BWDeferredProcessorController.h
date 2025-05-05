@interface BWDeferredProcessorController : BWStillImageProcessorController
- (id)init;
- (void)dealloc;
- (unsigned long long)type;
- (int)enqueueInputForProcessing:delegate:;
- (void)cancelProcessing;
- (void)inputReadyForProcessing:;
@end
