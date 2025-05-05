@interface VCPCNNHandKeypointsDetectorEspresso : VCPCNNHandKeypointsDetector
- (void)dealloc;
- (void).cxx_destruct;
- (id)init:sharedModel:modelName:;
- (id)getInputBuffer:srcWidth:cnnInputHeight:cnnInputWidth:offset:;
- (int)generateHandKeypoints:keypointConfidence:offset:;
@end
