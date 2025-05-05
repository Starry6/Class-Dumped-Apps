@interface BWDeferredCaptureController : BWStillImageProcessorController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)prepare;
- (int)process;
- (void)reset;
- (id)initWithConfiguration:;
- (void)cancelProcessing;
- (id)requestForInput:delegate:errOut:;
- (void)inputReceivedIntermediate:;
- (void)input:encounteredProcessingError:;
- (void)_addInferencesToInput:request:;
+ (BOOL)usesCustomProcessingFlow;
@end
