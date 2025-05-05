@interface IPAAdjustmentVersion : NSObject
@property (nonatomic) Q majorVersion;
@property (nonatomic) Q minorVersion;
@property (nonatomic) NSString platform;
- (unsigned long long)majorVersion;
- (unsigned long long)minorVersion;
- (unsigned long long)hash;
- (id)debugDescription;
- (long long)compare:;
- (id)platform;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)setMinorVersion:;
- (BOOL)isEqualToAdjustmentVersion:;
- (id)archivalRepresentation;
- (id)initWithMajor:minor:platform:;
+ (id)validatePlatformString:;
+ (id)versionForMajor:minor:platform:;
+ (id)versionForMajor:minor:;
+ (id)versionFromArchivalRepresentation:;
@end
