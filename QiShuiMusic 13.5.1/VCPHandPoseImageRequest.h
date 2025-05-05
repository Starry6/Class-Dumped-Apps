@interface VCPHandPoseImageRequest : VCPRequest
- (id)init;
- (id)initWithOptions:;
- (void).cxx_destruct;
- (BOOL)updateWithOptions:error:;
- (id)preferredInputSizeWithOptions:error:;
- (unsigned int)preferredPixelFormat;
- (id)processImage:withOptions:error:;
- (int)parseResults:observations:;
- (BOOL)cleanupWithOptions:error:;
@end
