@interface WFAppIcon : WFIcon
@property (nonatomic) NSString bundleIdentifier;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
