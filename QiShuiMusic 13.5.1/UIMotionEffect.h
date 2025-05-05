@interface UIMotionEffect : NSObject
- (id)init;
- (id)keyPathsAndRelativeValuesForViewerOffset:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_keyPathsAndRelativeValuesForPose:;
- (id)copyWithZone:;
- (id)_preferredMotionAnalyzerSettings;
- (void)_setPreferredMotionAnalyzerSettings:;
- (id)_animationIdentifier;
@end
