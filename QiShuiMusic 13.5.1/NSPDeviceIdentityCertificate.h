@interface NSPDeviceIdentityCertificate : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (void)resetDeviceIdentityInfo;
- (void)deviceIdentityAuthenticationFailed;
- (void)fetchDeviceIdentityCertificate:;
+ (BOOL)supportsSecureCoding;
+ (void)removeFromPreferences;
+ (BOOL)deviceSupportsDeviceIdentityWithSerialNumber;
+ (id)sharedDeviceIdentity;
@end
