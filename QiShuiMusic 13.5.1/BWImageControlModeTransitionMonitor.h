@interface BWImageControlModeTransitionMonitor : NSObject
@property (nonatomic) NSDictionary expectedSphereModesByPortType;
@property (nonatomic) NSDictionary expectedMinimumFrameRatesByPortType;
@property (nonatomic) NSDictionary expectedLTMCurvesByPortType;
@property (nonatomic) NSInteger ltmCurvesTransitionFrameCount;
@property (nonatomic) double coarseFocusCheckTimeout;
@property (nonatomic) BOOL waitForTorchToRampUp;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isTransitionCompleteWithSampleBuffer:masterCaptureStreamPortType:activeSlaveStreamPortType:;
- (id)expectedSphereModesByPortType;
- (void)setExpectedSphereModesByPortType:;
- (id)expectedMinimumFrameRatesByPortType;
- (void)setExpectedMinimumFrameRatesByPortType:;
- (id)expectedLTMCurvesByPortType;
- (void)setExpectedLTMCurvesByPortType:;
- (int)ltmCurvesTransitionFrameCount;
- (void)setLtmCurvesTransitionFrameCount:;
- (double)coarseFocusCheckTimeout;
- (void)setCoarseFocusCheckTimeout:;
- (BOOL)waitForTorchToRampUp;
- (void)setWaitForTorchToRampUp:;
@end
