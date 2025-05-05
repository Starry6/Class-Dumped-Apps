@interface WFImageIcon : WFIcon
@property (nonatomic) WFImage image;
- (id)initWithImage:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)image;
+ (BOOL)supportsSecureCoding;
@end
