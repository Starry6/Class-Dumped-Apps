@interface WFIconGradientBackground : WFIconBackground
@property (nonatomic) WFGradient gradient;
- (id)gradient;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithGradient:;
+ (BOOL)supportsSecureCoding;
@end
