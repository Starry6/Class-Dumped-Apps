@interface VCPCNNFaceLandmarkDetector : NSObject
- (void).cxx_destruct;
- (id)landmarks;
- (id)getInputBuffer;
- (int)computeLandmarks:;
- (int)analyzeFrame:withFaceBounds:;
+ (id)detector;
@end
