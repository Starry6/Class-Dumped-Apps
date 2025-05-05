@interface IDSRegisteredDevice : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString hardwareVersion;
@property (nonatomic) NSData pushToken;
@property (nonatomic) NSArray URIs;
@property (nonatomic) NSData publicDeviceIdentity;
- (id)URIs;
- (id)hardwareVersion;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)pushToken;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithName:hardwareVersion:pushToken:URIs:publicDeviceIdentity:;
- (BOOL)isEqualToRegisteredDevice:;
- (id)publicDeviceIdentity;
+ (BOOL)supportsSecureCoding;
+ (id)registeredDeviceFromDependentRegistrationDictionary:;
@end
