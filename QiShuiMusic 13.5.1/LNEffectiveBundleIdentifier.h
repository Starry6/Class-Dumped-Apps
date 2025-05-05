@interface LNEffectiveBundleIdentifier : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) q type;
- (id)bundleIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithType:bundleIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
