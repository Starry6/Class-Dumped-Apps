@interface ARKeyFrame : NSObject
@property (nonatomic) {?=[4]} transform;
@property (nonatomic) ARPointCloud featurePoints;
@property (nonatomic) {?=[3]} cameraIntrinsics;
- (id)transform;
- (void).cxx_destruct;
- (id)description;
- (id)cameraIntrinsics;
- (void)setCameraIntrinsics:;
- (id)featurePoints;
- (id)initWithKeyframeData:featurePoints:referenceOriginTransform:;
@end
