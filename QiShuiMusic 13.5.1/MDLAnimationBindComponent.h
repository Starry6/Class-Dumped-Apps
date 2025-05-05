@interface MDLAnimationBindComponent : NSObject
@property (nonatomic) MDLSkeleton skeleton;
@property (nonatomic) <MDLJointAnimation> jointAnimation;
@property (nonatomic) NSArray jointPaths;
@property (nonatomic) {?=[4]} geometryBindTransform;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)skeleton;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)jointPaths;
- (id)geometryBindTransform;
- (void)setSkeleton:;
- (id)jointAnimation;
- (void)setJointAnimation:;
- (void)setJointPaths:;
- (void)setGeometryBindTransform:;
@end
