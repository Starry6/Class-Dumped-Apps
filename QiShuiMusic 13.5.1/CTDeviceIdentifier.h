@interface CTDeviceIdentifier : NSObject
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSString modelName;
@property (nonatomic) Q deviceType;
@property (nonatomic) NSString EID;
@property (nonatomic) NSString IMEI;
@property (nonatomic) NSString idsDeviceId;
- (unsigned long long)deviceType;
- (id)modelName;
- (void)setDeviceType:;
- (void)setModelName:;
- (id)init;
- (void)setDeviceName:;
- (id)deviceName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)idsDeviceId;
- (id)IMEI;
- (void).cxx_destruct;
- (void)setIdsDeviceId:;
- (void)setIMEI:;
- (id)description;
- (BOOL)isEqual:;
- (id)EID;
- (void)setEID:;
- (id)initWithDeviceType:EID:IMEI:idsDeviceId:;
+ (BOOL)supportsSecureCoding;
@end
