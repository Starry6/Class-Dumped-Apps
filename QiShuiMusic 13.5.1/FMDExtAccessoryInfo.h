@interface FMDExtAccessoryInfo : NSObject
@property (nonatomic) NSString accessoryIdentifier;
@property (nonatomic) NSString accessoryType;
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary serialNumbers;
@property (nonatomic) NSString firmwareVersion;
@property (nonatomic) NSString deviceDiscoveryId;
@property (nonatomic) NSDictionary additionalInfo;
- (id)firmwareVersion;
- (void)setName:;
- (id)additionalInfo;
- (id)initWithCoder:;
- (id)accessoryType;
- (void)encodeWithCoder:;
- (void)setAccessoryType:;
- (void).cxx_destruct;
- (void)setFirmwareVersion:;
- (id)description;
- (id)name;
- (void)setAdditionalInfo:;
- (id)serialNumbers;
- (id)accessoryIdentifier;
- (void)setAccessoryIdentifier:;
- (void)setSerialNumbers:;
- (id)deviceDiscoveryId;
- (void)setDeviceDiscoveryId:;
+ (BOOL)supportsSecureCoding;
@end
