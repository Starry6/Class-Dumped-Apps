@interface ABPKResultRetargeting : NSObject
@property (nonatomic) Q jointTransformCount;
@property (nonatomic) r^{?=[4]} jointModelTransforms;
@property (nonatomic) r^{?=[4]} jointLocalTransforms;
@property (nonatomic) r^{?={?=}} localJointTransformsSRT;
@property (nonatomic) float estimatedScale;
@property (nonatomic) NSUUID identifier;
- (id)identifier;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)jointModelTransforms;
- (id)jointLocalTransforms;
- (id)initWithModelJointTransforms:localJointTransformsSRT:numberOfTransforms:liftedSkeletonData:identifier:;
- (id)localJointTransformsSRT;
- (unsigned long long)jointTransformCount;
- (float)estimatedScale;
- (void)setEstimatedScale:;
@end
