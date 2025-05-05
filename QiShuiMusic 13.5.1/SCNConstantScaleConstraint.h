@interface SCNConstantScaleConstraint : SCNConstraint
@property (nonatomic) float scale;
@property (nonatomic) BOOL screenSpace;
- (id)init;
- (void)setScale:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (float)scale;
- (id)copyWithZone:;
- (BOOL)screenSpace;
- (void)setScreenSpace:;
+ (BOOL)supportsSecureCoding;
+ (id)constantScaleConstraint;
@end
