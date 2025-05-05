@interface BWSubjectRelightingCalculator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:format:;
- (id)processorController:newOutputPixelBufferForProcessorInput:type:;
- (void)processorController:didFinishProcessingSampleBuffer:type:processorInput:err:;
- (void)processorController:didFinishProcessingInput:err:;
- (void)prepareForVideoFormatAsync:;
- (id)startCalculationWithJPEGSampleBuffer:stillImageRequestSettings:stillImageCaptureSettings:;
@end
