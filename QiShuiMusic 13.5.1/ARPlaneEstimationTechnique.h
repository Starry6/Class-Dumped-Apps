@interface ARPlaneEstimationTechnique : ARTechnique
@property (nonatomic) ARWorldTrackingTechnique worldTrackingTechnique;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (BOOL)isBusy;
- (void).cxx_destruct;
- (id)_fullDescription;
- (BOOL)isEqual:;
- (void)requestResultDataAtTimestamp:context:;
- (id)resultDataClasses;
- (BOOL)reconfigurableFrom:;
- (void)reconfigureFrom:;
- (void)siblingTechniquesDidChange:;
- (void)technique:didDetectPlane:timestamp:;
- (void)technique:didOutputSceneUnderstandingData:timestamp:;
- (id)initWithTrackingTechnique:;
- (id)worldTrackingTechnique;
- (void)setWorldTrackingTechnique:;
+ (id)detectPlanes:withFrame:;
+ (id)_detectPlanesWithDetector:types:camera:referenceFeaturePoints:referenceOriginTransform:;
@end
