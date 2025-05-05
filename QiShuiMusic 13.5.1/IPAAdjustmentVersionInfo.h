@interface IPAAdjustmentVersionInfo : NSObject
@property (nonatomic) NSString platform;
@property (nonatomic) NSString buildNumber;
@property (nonatomic) NSString appVersion;
@property (nonatomic) q schemaRevision;
- (void)setAppVersion:;
- (id)appVersion;
- (void)setPlatform:;
- (id)buildNumber;
- (id)platform;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setBuildNumber:;
- (long long)schemaRevision;
- (void)setSchemaRevision:;
- (id)archivalRepresentation;
- (BOOL)isEqualToVersionInfo:;
+ (id)systemBuildVersion;
+ (id)frameworkVersion;
+ (id)_frameworkVersion;
+ (id)currentVersionInfo;
+ (id)versionInfoFromArchivalRepresentation:;
@end
