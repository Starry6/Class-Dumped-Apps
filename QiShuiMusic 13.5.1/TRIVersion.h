@interface TRIVersion : NSObject
@property (nonatomic) NSNumber majorVersion;
@property (nonatomic) NSNumber minorVersion;
@property (nonatomic) NSNumber patchVersion;
- (id)majorVersion;
- (id)init;
- (id)patchVersion;
- (id)minorVersion;
- (id)copyWithReplacementPatchVersion:;
- (unsigned long long)hash;
- (id)copyWithReplacementMajorVersion:;
- (id)copyWithReplacementMinorVersion:;
- (long long)compare:;
- (void).cxx_destruct;
- (BOOL)isEqualToVersion:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithMajorVersion:minorVersion:patchVersion:;
- (id)copyWithZone:;
+ (id)versionWithMajorVersion:minorVersion:patchVersion:;
+ (id)parseVersionFromString:withPrefix:;
@end
