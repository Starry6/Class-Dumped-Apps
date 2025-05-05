@interface VCPLivePhotoKeyFrameAnalyzer : NSObject
- (void)dealloc;
- (id)initWithWidth:height:;
- (id)selectKeyFrameRangeWithMotion:stillTimestamp:isMetaMotion:;
- (int)analyzeLivePhotoKeyFrame:irisPhotoOffsetSec:originalIrisPhotoOffsetSec:photoTextureScore:hadFlash:cancel:;
- (int)reportLivePhotoKeyFrameAnalysisResults:selectedKeyFrame:originalStillKeyFrame:stillScore:stillFQScore:stillTimestamp:useSemanticOnly:isKeyFrameSuggested:;
- (void)fetchAndComputeScoreForKeyFrame:withResult:;
- (float)computeScoreForPhoto:withRefKeyFrame:;
- (float)computeOverallFaceQualityScore:;
- (void)createFaceHeatMap:imageFaces:;
- (void)updateFaceHeatMap:;
- (float)getFaceHeat:;
@end
