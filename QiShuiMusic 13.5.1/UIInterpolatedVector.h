@interface UIInterpolatedVector : NSObject
@property (nonatomic) r^d vector;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isUndefined;
- (id)multiplyByVector:;
- (void)dealloc;
- (id)multiplyByScalar:;
- (id)interpolateTo:progress:;
- (id)addVector:;
- (id)debugDescription;
- (id)initWithLength:;
- (void)reinitWithVector:;
- (BOOL)isApproximatelyEqualTo:withinEpsilon:;
- (void)integrateWithVelocity:target:intermediateTarget:intermediateTargetVelocity:parameters:state:delta:;
- (id)getValue;
- (BOOL)isCompatibleWith:;
- (id)copyWithZone:;
- (id)vector;
+ (id)epsilonCompatibleWithVector:;
+ (id)zeroCompatibleWithVector:;
+ (id)valueWithVectorMutator:length:;
+ (id)valueWithVector:length:;
@end
