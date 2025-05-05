@interface AADeviceProvisioningSession : NSObject
- (id)init;
- (void)addProvisioningInfoToAARequest:;
- (id)initWithDSID:;
- (int)synchronizeProvisioningWithData:;
- (int)provisionDeviceWithData:;
- (int)eraseProvisioning;
- (void)setCookieStorageRef:;
- (void).cxx_destruct;
- (void)addProvisioningInfoToAARequest:withFallback:;
- (id)initWithAccount:;
- (void)addProvisioningInfoToURLRequest:sendEmptyValues:;
- (id)deviceProvisioningInfo;
@end
