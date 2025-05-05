@interface IMSandboxedResource : NSObject
@property (nonatomic) q sandboxExtensionHandle;
@property (nonatomic) @ resource;
@property (nonatomic) NSString sandboxExtension;
- (void)dealloc;
- (void)setResource:;
- (id)initWithCoder:;
- (void)setSandboxExtensionHandle:;
- (void)encodeWithCoder:;
- (long long)sandboxExtensionHandle;
- (void).cxx_destruct;
- (id)resource;
- (id)sandboxExtension;
- (id)description;
- (void)setSandboxExtension:;
- (void)authorizeForPID:;
- (BOOL)accessResourceByConsumingSandboxExtensionWithBlock:;
- (char *)_sandboxExtensionForPID:;
+ (BOOL)supportsSecureCoding;
+ (Class)resourceClass;
@end
