@interface IDSFamilyEndpointData : NSObject
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSString deviceColor;
@property (nonatomic) NSString buildVersion;
@property (nonatomic) NSString productVersion;
@property (nonatomic) NSString deviceUniqueID;
@property (nonatomic) q deviceType;
- (id)deviceColor;
- (long long)deviceType;
- (void)setBuildVersion:;
- (id)buildVersion;
- (void)setProductVersion:;
- (void)setDeviceType:;
- (id)productVersion;
- (void)setDeviceName:;
- (id)deviceName;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setDeviceColor:;
- (id)dictionaryRepresentation;
- (id)deviceUniqueID;
- (void)setDeviceUniqueID:;
- (id)initWithDeviceName:privateDeviceData:;
+ (BOOL)supportsSecureCoding;
@end
