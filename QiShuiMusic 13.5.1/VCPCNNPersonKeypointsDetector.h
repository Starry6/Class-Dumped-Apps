@interface VCPCNNPersonKeypointsDetector : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)copyImage:toData:;
- (id)initWithForceCPU:sharedModel:;
- (int)createInput:withBuffer:cnnInputHeight:cnnInputWidth:box:;
- (int)analyzeFrame:withBox:keypoints:;
- (int)parseKeypoints:;
@end
