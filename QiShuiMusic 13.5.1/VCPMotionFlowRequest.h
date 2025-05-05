@interface VCPMotionFlowRequest : VCPRequest
- (id)init;
- (void)dealloc;
- (id)initWithOptions:;
- (int)createPixelBufferWithWidth:height:pixelFormat:pixelBuffer:;
- (void).cxx_destruct;
- (BOOL)updateWithOptions:error:;
- (id)estimateMotionBetweenFirstImage:andSecondImage:withUpsample:withGuidedImage:error:;
- (id)preferredInputSizeWithOptions:error:;
- (unsigned int)preferredPixelFormat;
- (BOOL)cleanupWithOptions:error:;
- (id)initWithOptions:cancel:;
- (int)convertPixelBuffer:toPixelBuffer:withPixelFormat:;
- (id)estimateMotionBetweenFirstImage:andSecondImage:error:;
@end
