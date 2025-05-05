@interface ARQLSandboxingURLWrapper : NSObject
@property (nonatomic) NSURL url;
- (id)url;
- (id)initWithURL:extensionClass:report:error:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)issueSandboxExtensionForURL:extensionClass:report:error:;
+ (id)wrapperWithURL:extensionClass:report:error:;
+ (id)wrapperWithURL:readonly:error:;
+ (BOOL)supportsSecureCoding;
+ (void)assembleURL:sandbox:physicalURL:physicalSandbox:;
+ (id)wrapperWithURL:extensionClass:error:;
@end
