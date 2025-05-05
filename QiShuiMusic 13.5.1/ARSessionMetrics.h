@interface ARSessionMetrics : NSObject
- (id)init;
- (void)recordSaveMap:numberOfFeaturePoints:;
- (void)_processFrameProperties:;
- (void)recordTrueNorthUnavailable;
- (id)initWithReporter:;
- (void)sessionUpdateThermalState:;
- (void)recordHiResFrameCapture;
- (void)recordCoachingOverlayUsage:;
- (void)sessionStopped;
- (void).cxx_destruct;
- (void)_recordSessionEnd;
- (id)queue;
- (void)_recordBadFramePercentageFinal:;
- (void)sessionStarted:withConfiguration:;
- (void)reportSessionFailure:;
- (void)recordRaycast:tracked:;
- (void)sessionDidUpdateFrame:;
+ (void)setRenderType:;
+ (void)recordHitTest:;
+ (void)recordReplayMetrics:;
+ (void)recordAltitudeLookupAttemptWithDuration:andResult:;
+ (id)getRenderEngineString:;
@end
