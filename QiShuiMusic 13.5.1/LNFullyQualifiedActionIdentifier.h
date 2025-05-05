@interface LNFullyQualifiedActionIdentifier : NSObject
@property (nonatomic) NSString actionIdentifier;
@property (nonatomic) NSString bundleIdentifier;
- (id)bundleIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithActionIdentifier:bundleIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
