@interface FPTag : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) NSInteger color;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)label;
- (BOOL)isEqualToTag:;
- (int)color;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)localizedStandardCompare:;
- (long long)localizedCompare:;
- (id)initWithLabel:color:;
+ (BOOL)supportsSecureCoding;
@end
