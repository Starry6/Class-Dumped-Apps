@interface ABPKAlgorithm : NSObject
- (id)initWithParams:;
- (void).cxx_destruct;
- (void)_startInitABPKSignpost;
- (void)_endInitABPKSignpost;
- (void)setExitPoint:;
- (void)_startScaleEstimationSignpostWithTimestamp:;
- (void)_endScaleEstimationSignpostWithTimestamp:;
- (void)_startRetargettingSignpostWithTimestamp:;
- (void)_endRetargettingSignpostWithTimestamp:;
- (int)runWithInput:andGetOutput:;
- (void)_startABPKRunWithInputSignpostWithTimestamp:;
- (void)_endABPKRunWithInputSignpostWithTimestamp:;
@end
