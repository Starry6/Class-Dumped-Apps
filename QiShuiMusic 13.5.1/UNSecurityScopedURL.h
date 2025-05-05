@interface UNSecurityScopedURL : NSURL
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)_allowsDirectEncoding;
- (id)copyWithZone:;
- (id)_issueSandboxExtension;
- (id)initFileURLWithPath:sandboxExtensionClass:;
+ (BOOL)supportsSecureCoding;
@end
