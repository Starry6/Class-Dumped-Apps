@interface ABPKAlgorithmRA : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (void)setExitPoint:;
- (void)runABPKAlgorithmWithInputData:andGetOutput:;
- (void)saveInputData:andOutputData:ToDir:withFileNamePrefix:;
- (void)_startExecuteAlgorithmSignpost;
- (void)_endExecuteAlgorithmSignpost;
- (void)_startImagePreprocessingSignpost;
- (void)_endImagePreprocessingSignpost;
- (id)initWithCameraParams:;
- (id)initWithCameraParams:andAlgorithmMode:;
- (void)computeRootTransforms:withVioPose:withVioPoseValidity:;
- (int)preprocessInputImage:;
- (void)_startABPKAlgoInitSignpost;
- (void)_endABPKAlgoInitSignpost;
@end
