@interface MIOVersionInfo : NSObject
@property (nonatomic) q majorVersion;
@property (nonatomic) q minorVersion;
@property (nonatomic) q patchVersion;
@property (nonatomic) NSString versionNumberString;
- (long long)majorVersion;
- (long long)patchVersion;
- (long long)minorVersion;
- (id)versionNumberString;
- (unsigned long long)hash;
- (long long)compare:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithMajor:minor:patch:;
@end
