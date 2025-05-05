@interface ICDelegationServiceSecuritySettings : NSObject
@property (nonatomic) q securityMode;
@property (nonatomic) NSString password;
- (id)password;
- (long long)securityMode;
- (void).cxx_destruct;
- (id)description;
- (id)_init;
+ (void)getDeviceReceiverSettingsWithCompletion:;
+ (void)getDeviceSenderSettingsForReceiverName:securityMode:completion:;
@end
