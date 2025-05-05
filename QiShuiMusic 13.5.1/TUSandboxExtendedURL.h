@interface TUSandboxExtendedURL : NSObject
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString sandboxExtensionToken;
@property (nonatomic) q sandboxExtensionHandle;
@property (nonatomic) NSInteger pid;
@property (nonatomic) NSString sandboxExtensionClass;
- (id)init;
- (void)dealloc;
- (id)initWithURL:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setSandboxExtensionHandle:;
- (void)encodeWithCoder:;
- (int)pid;
- (long long)sandboxExtensionHandle;
- (void).cxx_destruct;
- (void)setSandboxExtensionToken:;
- (id)description;
- (id)sandboxExtensionToken;
- (BOOL)isEqual:;
- (void)setURL:;
- (void)setPid:;
- (id)URL;
- (id)initWithURL:withExtensionType:;
- (BOOL)isEqualToSandboxExtendedURL:;
- (id)sandboxExtensionClass;
- (void)setSandboxExtensionClass:;
+ (BOOL)supportsSecureCoding;
@end
