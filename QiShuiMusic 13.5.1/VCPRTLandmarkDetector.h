@interface VCPRTLandmarkDetector : NSObject
- (void)dealloc;
- (id)initFromConfigFile:numStage:numLandmarks:numTreePerStage:depthOfTree:numFeatures:;
- (void)detectLandmark:width:height:stride:facerect:prevResult:result:;
- (void)calculateFaceRectFromPrevLM:result:numOfLandmarks:;
@end
