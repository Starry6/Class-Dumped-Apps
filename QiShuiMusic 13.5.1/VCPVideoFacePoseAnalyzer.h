@interface VCPVideoFacePoseAnalyzer : NSObject
@property (nonatomic) {?=[4]} pose;
- (id)init;
- (void).cxx_destruct;
- (id)pose;
- (void)setPose:;
- (BOOL)updateFocalLengthInPixels:;
- (id)initWithFocalLengthInPixels:;
- (int)analyzeFrameForPose:withFaceRect:withTimestamp:;
@end
