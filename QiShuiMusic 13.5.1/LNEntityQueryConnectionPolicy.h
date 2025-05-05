@interface LNEntityQueryConnectionPolicy : NSObject
@property (nonatomic) NSString appBundleIdentifier;
@property (nonatomic) NSString entityQueryIdentifier;
@property (nonatomic) NSString entityQueryMangledTypeName;
@property (nonatomic) LNEffectiveBundleIdentifier effectiveBundleIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)appBundleIdentifier;
- (void)encodeWithCoder:;
- (id)effectiveBundleIdentifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)connectionWithError:;
- (id)initWithEntityQueryIdentifier:entityQueryMangledTypeName:effectiveBundleIdentifier:appBundleIdentifier:;
- (id)entityQueryIdentifier;
- (id)entityQueryMangledTypeName;
+ (BOOL)supportsSecureCoding;
@end
