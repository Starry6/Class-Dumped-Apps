@interface MXMetaData : NSObject
@property (nonatomic) NSString regionFormat;
@property (nonatomic) NSString osVersion;
@property (nonatomic) NSString deviceType;
@property (nonatomic) NSString applicationBuildVersion;
@property (nonatomic) NSString platformArchitecture;
- (id)deviceType;
- (id)JSONRepresentation;
- (void)setDeviceType:;
- (id)osVersion;
- (id)toDictionary;
- (id)initWithCoder:;
- (id)regionFormat;
- (void)encodeWithCoder:;
- (void)setOsVersion:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithRegionFormat:osVersion:deviceType:appBuildVersion:platformArchitecture:;
- (id)initWithRegionFormat:osVersion:deviceType:appBuildVersion:;
- (id)DictionaryRepresentation;
- (void)setRegionFormat:;
- (id)applicationBuildVersion;
- (void)setApplicationBuildVersion:;
- (id)platformArchitecture;
- (void)setPlatformArchitecture:;
+ (BOOL)supportsSecureCoding;
@end
