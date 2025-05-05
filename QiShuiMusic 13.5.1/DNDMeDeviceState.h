@interface DNDMeDeviceState : NSObject
@property (nonatomic) Q meDeviceStatus;
@property (nonatomic) NSString meDeviceName;
- (id)meDeviceName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (unsigned long long)meDeviceStatus;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithStatus:name:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
