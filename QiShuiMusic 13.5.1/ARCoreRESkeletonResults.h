@interface ARCoreRESkeletonResults : NSObject
@property (nonatomic) {?=[3]} cameraIntrinsics;
@property (nonatomic) {CGSize=dd} imageResolution;
@property (nonatomic) NSArray retargetedSkeletons;
@property (nonatomic) double timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)cameraIntrinsics;
- (void)setCameraIntrinsics:;
- (id)imageResolution;
- (id)anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:;
- (void)setImageResolution:;
- (id)retargetedSkeletons;
- (void)setRetargetedSkeletons:;
@end
