@interface MLVersionInfo : NSObject
@property (nonatomic) q majorVersion;
@property (nonatomic) q minorVersion;
@property (nonatomic) q patchVersion;
@property (nonatomic) NSString variantString;
@property (nonatomic) NSString versionNumberString;
@property (nonatomic) NSString versionString;
- (long long)majorVersion;
- (id)versionString;
- (long long)patchVersion;
- (id)variantString;
- (long long)minorVersion;
- (id)initWithMajor:minor:patch:variant:;
- (id)versionNumberString;
- (void).cxx_destruct;
- (BOOL)olderThan:;
+ (id)versionInfoWithStringProgressive:;
+ (id)versionInfoWithMajor:minor:patch:variant:;
+ (id)versionInfoWithString:;
@end
