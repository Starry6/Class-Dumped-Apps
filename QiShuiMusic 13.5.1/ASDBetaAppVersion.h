@interface ASDBetaAppVersion : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) q platform;
@property (nonatomic) NSString shortVersion;
- (id)bundleVersion;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)platform;
- (void).cxx_destruct;
- (id)description;
- (id)bundleID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)shortVersion;
+ (BOOL)supportsSecureCoding;
+ (id)versionWithBundleID:bundleVersion:andShortVersion:;
+ (id)versionWithBundleID:bundleVersion:platform:andShortVersion:;
+ (long long)defaultPlatform;
@end
