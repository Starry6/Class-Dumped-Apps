@interface VCPCNNFaceLandmarkDetectorEspresso : VCPCNNFaceLandmarkDetector
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)getInputBuffer;
- (int)computeLandmarks:;
+ (id)sharedModel:;
@end
