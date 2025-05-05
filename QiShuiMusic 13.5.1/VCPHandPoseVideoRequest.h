@interface VCPHandPoseVideoRequest : VCPRequest
- (id)init;
- (id)initWithOptions:;
- (void).cxx_destruct;
- (id)preferredInputSizeWithOptions:error:;
- (unsigned int)preferredPixelFormat;
- (BOOL)cleanupWithOptions:error:;
- (float)handDistance:withhandB:;
- (id)processSampleBuffer:withOptions:error:;
- (int)associateHands:withExisingHands:;
@end
