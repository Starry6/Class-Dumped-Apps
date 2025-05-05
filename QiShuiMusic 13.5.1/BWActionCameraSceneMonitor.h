@interface BWActionCameraSceneMonitor : NSObject
@property (nonatomic) BOOL portraitSceneMonitoringRequiresStageThresholds;
@property (nonatomic) float focusDistanceToMaxAllowedFocusDistanceRatio;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setAutoFocusInProgress:focusLocked:oneShotFocusScanInProgress:;
- (void)focusScanDidComplete;
- (void)setSDOFBackgroundShiftSum:invalidShiftRatio:closeCanonicalDisparityAverage:faceCanonicalDisparityAverages:erodedForegroundRatio:foregroundRatio:occluded:faces:;
- (BOOL)resolveSDOFStatusWithSampleBuffer:frameStatisticsByPortType:sceneFlags:flashOrTorchWillBeActive:digitalFlashWillFire:effectStatus:stagePreviewStatus:;
- (BOOL)portraitSceneMonitoringRequiresStageThresholds;
- (void)setPortraitSceneMonitoringRequiresStageThresholds:;
- (float)focusDistanceToMaxAllowedFocusDistanceRatio;
- (id)initWithTuningParametersByPortType:videoStabilizationStrength:bravoTelephotoEnabled:attachDebugFrameStatistics:;
@end
