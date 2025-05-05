@interface BWSWFRProcessorController : BWStillImageProcessorController
@property (nonatomic) I outputPixelFormat;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (int)prepare;
- (int)process;
- (unsigned int)outputPixelFormat;
- (void)reset;
- (id)initWithConfiguration:;
- (id)requestForInput:delegate:errOut:;
- (id)metalImageBufferProcessor;
- (void)input:addFlashFrame:;
- (void)input:addAmbientFrame:;
- (void)inputAddFrameFailed:;
- (id)processorNewInferences:;
+ (BOOL)usesCustomProcessingFlow;
@end
