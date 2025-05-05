@interface FPURLOperationLocator : FPActionOperationLocator
- (id)filename;
- (id)parentIdentifier;
- (id)identifier;
- (BOOL)isFolder;
- (id)initWithCoder:;
- (id)initWithObject:;
- (void)encodeWithCoder:;
- (id)description;
- (unsigned long long)size;
- (BOOL)isDownloaded;
- (BOOL)isExternalURL;
- (void)attachSandboxExtensionOnXPCEncoding;
- (BOOL)requiresCrossDeviceCopy;
+ (BOOL)supportsSecureCoding;
@end
