@interface VSAuditToken : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSData tokenBytes;
- (id)init;
- (id)bundleIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)tokenBytes;
- (void)setTokenBytes:;
+ (BOOL)supportsSecureCoding;
@end
