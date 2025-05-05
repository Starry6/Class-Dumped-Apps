@interface VCPVideoGlobalAnalyzer : NSObject
- (float)analyzeOverallQuality:withFpsRate:;
- (BOOL)checkCameraZoom:cameraMotionResults:;
- (int)generateLivePhotoRecommendationForResults:andPrivateResults:usingFaceAction:;
- (float)assetQualityScoreFromAnalysis:withFpsRate:;
- (float)assetActionScoreFromAnalysis:;
- (float)assetExpressionScoreFromAnalysis:;
- (float)assetVoiceScoreFromAnalysis:;
- (float)assetCameraMotionScoreFromAnalysis:;
- (BOOL)hasMeaningfulSceneSegment:withFpsRate:;
- (float)assetJunkScoreFromAnalysis:;
- (float)scaleForTimeRange:basedOnFace:;
- (float)subjectActivityInTimeRange:fromResults:;
- (float)cameraActivityfromQuality:;
- (BOOL)isJunkTimeRange:basedOnResults:;
- (float)assetActivityLevelFromAnalysisResults:;
- (int)setActivityLevel:;
@end
