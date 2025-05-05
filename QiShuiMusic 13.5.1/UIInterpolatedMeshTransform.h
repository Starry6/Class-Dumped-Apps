@interface UIInterpolatedMeshTransform : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isUndefined;
- (id)multiplyByVector:;
- (id)multiplyByScalar:;
- (id)interpolateTo:progress:;
- (id)addVector:;
- (id)debugDescription;
- (void)reinitWithVector:;
- (BOOL)isApproximatelyEqualTo:withinEpsilon:;
- (void).cxx_destruct;
- (void)integrateWithVelocity:target:intermediateTarget:intermediateTargetVelocity:parameters:state:delta:;
- (id)getValue;
- (BOOL)isCompatibleWith:;
- (id)copyWithZone:;
- (void)_updateZeroMeshToBeCompatibleWithVector:;
- (BOOL)_isApproximatelyZeroWithinEpsilon:;
+ (id)epsilonCompatibleWithVector:;
+ (id)zeroCompatibleWithVector:;
+ (id)valueWithMeshTransform:;
+ (id)valueWithMeshTransform:epsilon:;
@end
