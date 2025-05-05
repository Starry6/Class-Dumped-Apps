@interface LNAppEntityConnectionPolicy : NSObject
@property (nonatomic) NSString appBundleIdentifier;
@property (nonatomic) NSString appEntityIdentifier;
@property (nonatomic) NSString appEntityMangledTypeName;
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
- (id)initWithAppEntityIdentifier:appEntityMangledTypeName:effectiveBundleIdentifier:appBundleIdentifier:;
- (id)connectionWithError:;
- (id)appEntityIdentifier;
- (id)appEntityMangledTypeName;
+ (BOOL)supportsSecureCoding;
@end
