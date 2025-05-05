@interface ARSkeleton3D : ARSkeleton
@property (nonatomic) ARCoreRESkeletonResult coreRESkeleton;
@property (nonatomic) r^{?=[4]} jointModelTransforms;
@property (nonatomic) r^{?=[4]} jointLocalTransforms;
- (id)definition;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (unsigned long long)jointCount;
- (BOOL)isJointTracked:;
- (id)initWithCoreRESkeletonResult:;
- (id)jointModelTransforms;
- (id)jointLocalTransforms;
- (id)coreRESkeleton;
- (id)modelTransformForJointName:;
- (id)localTransformForJointName:;
+ (BOOL)supportsSecureCoding;
@end
