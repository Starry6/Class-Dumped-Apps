@interface UIInterpolatedFloat : NSObject
@property (nonatomic) double value;
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
- (void)integrateWithVelocity:target:intermediateTarget:intermediateTargetVelocity:parameters:state:delta:;
- (double)value;
- (id)getValue;
- (BOOL)isCompatibleWith:;
- (id)copyWithZone:;
+ (id)epsilonCompatibleWithVector:;
+ (id)valueWithFloat:;
+ (id)zeroCompatibleWithVector:;
@end
