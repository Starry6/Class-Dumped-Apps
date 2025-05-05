@interface CKProcessScopedMetadata : NSObject
@property (nonatomic) I clientSDKVersion;
@property (nonatomic) CKFrameworkFingerprint frameworkFingerprint;
@property (nonatomic) BOOL isClientMainBundleAppleExecutable;
- (unsigned int)clientSDKVersion;
- (BOOL)isClientMainBundleAppleExecutable;
- (void)setIsClientMainBundleAppleExecutable:;
- (void)setClientSDKVersion:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)frameworkFingerprint;
- (void)setFrameworkFingerprint:;
+ (BOOL)supportsSecureCoding;
@end
