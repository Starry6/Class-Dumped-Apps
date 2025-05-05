@interface EspressoDataFrameExecutor : NSObject
@property (nonatomic) NSArray outputMatchingBuffers;
@property (nonatomic) NSInteger use_cvpixelbuffer;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)useCVPixelBuffersForOutputs:;
- (BOOL)useCVPixelBuffers;
- (int)bindInput:fromImageAttachment:toNetwork:;
- (int)bindInput:fromTensorAttachment:toNetwork:;
- (int)bindInputsFromFrame:toNetwork:;
- (int)bindOutputsFromFrame:toNetwork:referenceNetwork:;
- (int)bindOutputsFromFrame:toNetwork:;
- (int)bindOutputsFromFrame:toNetwork:executionStatus:;
- (void)freeTemporaryResources;
- (id)outputMatchingBuffers;
- (void)setOutputMatchingBuffers:;
- (int)use_cvpixelbuffer;
- (void)setUse_cvpixelbuffer:;
@end
