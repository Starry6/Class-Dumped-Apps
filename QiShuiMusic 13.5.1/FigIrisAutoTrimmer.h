@interface FigIrisAutoTrimmer : NSObject
@property (nonatomic) BOOL trimmingActive;
@property (nonatomic) I vitalityScoringVersion;
- (id)init;
- (void)startMotionProcessing;
- (void)dealloc;
- (BOOL)trimmingActive;
- (void)setVideoFrameRate:;
- (BOOL)intermediateLoggingEnabled;
- (void)stopMotionProcessing;
- (void)setVitalityScoringSmartCameraPipelineVersion:;
- (void)processISPMotionData:forHostTime:;
- (void)setIntermediateLoggingEnabled:;
- (id)maxHoldDuration;
- (int)emissionStatusForHostPTS:;
- (float)computeVitalityScoreForStillImageHostPTS:movieRange:;
- (double)videoFrameRate;
- (void)processCountOfVisibleVitalityObjects:forHostTime:;
- (void)processInferences:forHostTime:;
- (BOOL)vitalityScoringEnabled;
- (void)setBufferHistorySeconds:;
- (void)setMaxHoldDuration:;
- (id)exportMotionSamples;
- (unsigned int)vitalityScoringVersion;
- (void)setVitalityScoringEnabled:;
- (double)bufferHistorySeconds;
- (id)vitalityScoringSmartCameraPipelineVersion;
- (id)beginTrimmingForStillImageHostPTS:minimumPTS:;
@end
