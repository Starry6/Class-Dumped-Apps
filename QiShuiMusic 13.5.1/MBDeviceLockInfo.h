@interface MBDeviceLockInfo : NSObject
@property (nonatomic) NSString deviceUUID;
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSString ownerDeviceUUID;
@property (nonatomic) NSString ownerDeviceName;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSDate expirationDate;
- (id)deviceUUID;
- (void)setDeviceName:;
- (id)deviceName;
- (void)setCreationDate:;
- (void)setExpirationDate:;
- (id)initWithCoder:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)creationDate;
- (void)setDeviceUUID:;
- (id)ownerDeviceUUID;
- (void)setOwnerDeviceUUID:;
- (id)ownerDeviceName;
- (void)setOwnerDeviceName:;
+ (BOOL)supportsSecureCoding;
@end
