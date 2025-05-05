@interface ARImageTrackingTechnique : ARImageDetectionTechnique
- (id)initWithReferenceImages:maximumNumberOfTrackedImages:;
- (id)initWithReferenceImages:maximumNumberOfTrackedImages:deterministicMode:;
@end
