@interface NSShadow : NSObject
@property (nonatomic) {CGSize=dd} shadowOffset;
@property (nonatomic) double shadowBlurRadius;
@property (nonatomic) @ shadowColor;
- (id)init;
- (void)dealloc;
- (void)setShadowOffset:;
- (id)shadowOffset;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (double)shadowBlurRadius;
- (void)encodeWithCoder:;
- (id)initWithShadow:;
- (void)setShadowBlurRadius:;
- (id)shadowColor;
- (id)description;
- (void)applyToGraphicsContext:;
- (void)setShadowColor:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)shadow;
+ (id)defaultShadowColor;
@end
