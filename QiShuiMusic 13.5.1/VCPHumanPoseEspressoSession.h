@interface VCPHumanPoseEspressoSession : NSObject
- (void)dealloc;
- (id)initWithOptions:;
- (id)keypointsToObservation:;
- (int)keypointsFromTensor:withOptions:results:;
- (int)keypointsFromTensor:width:height:channels:withOptions:results:;
- (int)requiredInputFormat:height:format:;
- (int)processFrame:withOptions:results:;
@end
