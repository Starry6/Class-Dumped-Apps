@interface VCPHumanPoseImageRequest : VCPRequest
- (id)init;
- (id)initWithOptions:;
- (void).cxx_destruct;
- (BOOL)updateWithOptions:error:;
- (id)preferredInputSizeWithOptions:error:;
- (unsigned int)preferredPixelFormat;
- (id)processImage:withOptions:error:;
- (BOOL)cleanupWithOptions:error:;
+ (int)parseResults:observations:;
@end
