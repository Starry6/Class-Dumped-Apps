@interface VCPCNNGazeAnalysis : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)copyImage:toData:;
- (int)createInput:withBuffer:cnnInputHeight:cnnInputWidth:faceBounds:;
- (int)detectEyeOpennessForFace:inBuffer:eyeOpenness:;
+ (id)sharedModel:;
@end
