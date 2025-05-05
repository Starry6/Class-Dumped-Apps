@interface VCPCNNPetsKeypointsDetector : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)copyImage:toData:;
- (id)initWithForceCPU:sharedModel:;
- (int)createInput:withBuffer:cnnInputHeight:cnnInputWidth:box:;
- (int)analyzeFrame:withBox:keypoints:;
- (int)parseHeatmap2Keypoints:;
@end
