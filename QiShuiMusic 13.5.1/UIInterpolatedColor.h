@interface UIInterpolatedColor : NSObject
@property (nonatomic) NSString conciseDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isUndefined;
- (id)initWithDecomposedColor:;
- (id)getCGColor;
- (id)multiplyByVector:;
- (id)conciseDescription;
- (id)multiplyByScalar:;
- (id)interpolateTo:progress:;
- (id)getUIColor;
- (id)addVector:;
- (id)debugDescription;
- (void)reinitWithVector:;
- (BOOL)isApproximatelyEqualTo:withinEpsilon:;
- (void)integrateWithVelocity:target:intermediateTarget:intermediateTargetVelocity:parameters:state:delta:;
- (id)getValue;
- (BOOL)isCompatibleWith:;
- (id)copyWithZone:;
+ (id)valueWithCGColor:;
+ (id)epsilonCompatibleWithVector:;
+ (id)zeroCompatibleWithVector:;
+ (id)valueWithUIColor:;
@end
