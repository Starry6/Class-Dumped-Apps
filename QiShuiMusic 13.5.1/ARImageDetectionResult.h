@interface ARImageDetectionResult : NSObject
@property (nonatomic) {?=[4]} visionTransform;
@property (nonatomic) {?=[4]} transform;
@property (nonatomic) double estimatedScaleFactor;
@property (nonatomic) ARReferenceImage referenceImage;
@property (nonatomic) {?=[4]} worldTrackingCameraTransformAtDetection;
@property (nonatomic) ^v imageContext;
@property (nonatomic) Q odtObjectIdentifer;
- (void)setTransform:;
- (id)transform;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)referenceImage;
- (id)visionTransform;
- (void)setVisionTransform:;
- (double)estimatedScaleFactor;
- (void)setEstimatedScaleFactor:;
- (id)imageContext;
- (void)setImageContext:;
- (void)setReferenceImage:;
- (id)worldTrackingCameraTransformAtDetection;
- (void)setWorldTrackingCameraTransformAtDetection:;
- (unsigned long long)odtObjectIdentifer;
- (void)setOdtObjectIdentifer:;
@end
