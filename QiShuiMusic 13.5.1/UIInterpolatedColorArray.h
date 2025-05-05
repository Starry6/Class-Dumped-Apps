@interface UIInterpolatedColorArray : NSObject
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
- (id)initWithColors:;
- (BOOL)isApproximatelyEqualTo:withinEpsilon:;
- (void).cxx_destruct;
- (void)integrateWithVelocity:target:intermediateTarget:intermediateTargetVelocity:parameters:state:delta:;
- (id)getValue;
- (BOOL)isCompatibleWith:;
- (id)copyWithZone:;
+ (id)epsilonCompatibleWithVector:;
+ (id)zeroCompatibleWithVector:;
+ (id)valueWithCGColors:;
@end
