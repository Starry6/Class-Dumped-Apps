@interface WFIconColorBackground : WFIconBackground
@property (nonatomic) WFColor color;
- (id)initWithColor:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)color;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)clearBackground;
@end
