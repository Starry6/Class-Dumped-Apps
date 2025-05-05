@interface CXSandboxExtendedURL : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString sandboxExtensionToken;
@property (nonatomic) q sandboxExtensionHandle;
- (id)init;
- (id)initWithURL:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setSandboxExtensionHandle:;
- (void)encodeWithCoder:;
- (long long)sandboxExtensionHandle;
- (void).cxx_destruct;
- (void)setSandboxExtensionToken:;
- (id)description;
- (id)sandboxExtensionToken;
- (BOOL)isEqual:;
- (void)setURL:;
- (id)URL;
- (id)copyWithZone:;
- (BOOL)isEqualToSandboxExtendedURL:;
+ (BOOL)supportsSecureCoding;
@end
