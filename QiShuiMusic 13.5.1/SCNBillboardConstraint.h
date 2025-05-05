@interface SCNBillboardConstraint : SCNConstraint
@property (nonatomic) Q freeAxes;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (unsigned long long)freeAxes;
- (void)setFreeAxes:;
- (void)setPreserveScale:;
- (BOOL)preserveScale;
+ (BOOL)supportsSecureCoding;
+ (id)billboardConstraint;
@end
