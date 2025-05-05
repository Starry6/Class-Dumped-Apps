@interface PKBiometrics : NSObject
@property (nonatomic) BKDevicePearl pearlDevice;
@property (nonatomic) BKDeviceTouchID touchIDDevice;
- (id)init;
- (void).cxx_destruct;
- (BOOL)removeIdentity:;
- (id)nameForIdentity:;
- (BOOL)setName:forIdentity:;
- (id)identitiesForIdentityType:;
- (long long)maximumIdentityCountForIdentityType:;
- (BOOL)isPeriocularEnrollmentSupported;
- (id)deviceForType:;
- (long long)deviceTypeForIdentityType:;
- (id)nextIdentityNameForIdentityType:;
- (id)pearlDevice;
- (void)setPearlDevice:;
- (id)touchIDDevice;
- (void)setTouchIDDevice:;
+ (id)sharedInstance;
@end
