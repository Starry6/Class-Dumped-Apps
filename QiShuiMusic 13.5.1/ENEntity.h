@interface ENEntity : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) ENRegion region;
- (id)bundleIdentifier;
- (id)region;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithBundleID:region:;
+ (BOOL)supportsSecureCoding;
@end
