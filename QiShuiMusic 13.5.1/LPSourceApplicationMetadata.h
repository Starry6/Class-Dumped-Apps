@interface LPSourceApplicationMetadata : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) LPImage icon;
- (id)bundleIdentifier;
- (void)setName:;
- (id)icon;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
