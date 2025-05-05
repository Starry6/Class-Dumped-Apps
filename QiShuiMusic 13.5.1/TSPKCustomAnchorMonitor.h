@interface TSPKCustomAnchorMonitor : NSObject
@property (nonatomic) TSPKCustomAnchorReleaseDetectManager cameraManager;
@property (nonatomic) TSPKCustomAnchorReleaseDetectManager audioOutputManager;
@property (nonatomic) TSPKCustomAnchorReleaseDetectManager audioAUGraphManager;
- (id)audioAUGraphManager;
- (id)audioOutputManager;
- (double)detectDelay;
- (long long)detectTime;
- (BOOL)isEnableWithCaseId:;
- (void)logBizCalledMethod:caseId:description:;
- (void)logFeatureDisabledWithCaseId:;
- (void)markAudioStartWithCaseId:description:;
- (void)markAudioStopWithCaseId:description:;
- (void)markCameraStartWithCaseId:description:;
- (void)markCameraStopWithCaseId:description:;
- (void)setAudioAUGraphManager:;
- (void)setAudioOutputManager:;
- (id)cameraManager;
- (void)setCameraManager:;
- (void).cxx_destruct;
+ (id)shared;
@end
