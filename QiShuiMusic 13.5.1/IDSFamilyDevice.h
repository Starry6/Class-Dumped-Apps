@interface IDSFamilyDevice : NSObject
@property (nonatomic) NSString ownerHandle;
@property (nonatomic) NSString deviceName;
@property (nonatomic) q deviceType;
@property (nonatomic) NSString deviceColor;
@property (nonatomic) NSString buildVersion;
@property (nonatomic) NSString deviceUniqueID;
- (id)deviceColor;
- (long long)deviceType;
- (void)setBuildVersion:;
- (id)buildVersion;
- (void)setDeviceType:;
- (void)setDeviceName:;
- (id)deviceName;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (void)setDeviceColor:;
- (id)dictionaryRepresentation;
- (id)deviceUniqueID;
- (id)initWithOwnerHandle:deviceName:deviceType:deviceColor:buildVersion:deviceUniqueID:;
- (id)ownerHandle;
- (void)setOwnerHandle:;
- (void)setDeviceUniqueID:;
@end
