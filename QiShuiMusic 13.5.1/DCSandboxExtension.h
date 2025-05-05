@interface DCSandboxExtension : NSObject
@property (nonatomic) BOOL shouldIssueSandboxExtensionWhenEncoding;
@property (nonatomic) q sandboxExtensionHandle;
@property (nonatomic) BOOL canAccessFileURL;
@property (nonatomic) NSURL fileURL;
- (void)dealloc;
- (id)initWithCoder:;
- (void)setSandboxExtensionHandle:;
- (void)encodeWithCoder:;
- (id)initWithFileURL:;
- (long long)sandboxExtensionHandle;
- (void).cxx_destruct;
- (void)relinquish;
- (id)fileURL;
- (BOOL)canAccessFileURL;
- (BOOL)shouldIssueSandboxExtensionWhenEncoding;
+ (BOOL)supportsSecureCoding;
@end
