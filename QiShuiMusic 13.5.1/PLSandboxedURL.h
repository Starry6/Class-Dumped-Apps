@interface PLSandboxedURL : NSURL
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithURL:sandboxExtensionToken:consume:;
- (id)initFileURLWithPath:sandboxExtensionToken:consume:;
- (void)_initSandboxExtensionToken:consume:;
- (void)_commonPLSandboxedURLInitialize;
+ (BOOL)supportsSecureCoding;
@end
