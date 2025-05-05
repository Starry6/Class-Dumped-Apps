@interface ABPKSkeletonDefinition : NSObject
@property (nonatomic) Q jointCount;
@property (nonatomic) q rootJointIndex;
@property (nonatomic) NSArray parentChildOrder;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithType:;
- (unsigned long long)jointCount;
- (id)initWithPlist:fromBundle:;
- (id)jointName:;
- (long long)indexOfJointWithName:;
- (long long)parentJoint:;
- (id)getChildrenIndices:;
- (void)enumerateChildrenJointIndicesOfJointAtIndex:withBlock:;
- (long long)rootJointIndex;
- (id)parentChildOrder;
+ (id)computeParentChildOrderFor:withRoot:;
@end
