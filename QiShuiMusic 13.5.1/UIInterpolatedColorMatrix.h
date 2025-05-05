@interface UIInterpolatedColorMatrix : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isUndefined;
- (id)initWithColorMatrix:;
- (id)multiplyByVector:;
- (id)multiplyByScalar:;
- (id)interpolateTo:progress:;
- (id)addVector:;
- (id)debugDescription;
- (void)reinitWithVector:;
- (BOOL)isApproximatelyEqualTo:withinEpsilon:;
- (void)integrateWithVelocity:target:intermediateTarget:intermediateTargetVelocity:parameters:state:delta:;
- (id)getValue;
- (BOOL)isCompatibleWith:;
- (id)copyWithZone:;
+ (id)epsilonCompatibleWithVector:;
+ (id)valueWithColorMatrix:;
+ (id)zeroCompatibleWithVector:;
@end
