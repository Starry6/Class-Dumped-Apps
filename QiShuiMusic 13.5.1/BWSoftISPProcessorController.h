@interface BWSoftISPProcessorController : BWStillImageProcessorController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (int)prepare;
- (int)process;
- (void)reset;
- (id)initWithConfiguration:;
- (id)externalMemoryDescriptor;
- (id)requestForInput:delegate:errOut:;
- (id)metalImageBufferProcessor;
- (void)input:addFrame:processingMode:;
- (id)newOutputPixelBufferForUniqueID:pixelFormat:width:height:;
- (id)newOutputAuxiliaryPixelBufferForUniqueID:pixelFormat:width:height:;
- (void)notifyProcessInputFrameForUniqueID:;
- (void)outputFrameEnqueued:;
- (void)outputFrameCompleted:;
- (void)outputFrameEnqueueFailure:;
- (void)outputFrameGPUFailure:;
- (unsigned int)outputPixelFormatForCaptureType:captureFlags:processingMode:isQuadra:;
- (unsigned int)outputPixelFormatForCaptureType:captureFlags:processingMode:;
- (unsigned int)outputPixelFormatForCaptureType:processingMode:;
- (unsigned int)outputPixelFormatForInput:;
- (unsigned int)auxiliaryPixelFormatForInput:;
+ (BOOL)usesCustomProcessingFlow;
@end
