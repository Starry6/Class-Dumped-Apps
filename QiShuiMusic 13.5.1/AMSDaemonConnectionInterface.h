@interface AMSDaemonConnectionInterface : NSObject
+ (id)interface;
+ (void)_setUpSecurityInterfaceHandleResponseSelector:;
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:;
+ (id)_fraudReportServiceInterface;
+ (void)_configureURLPresentationDelegateClasses:;
+ (id)_deviceMessengerServiceInterface;
+ (id)_deviceMessengerClientInterface;
+ (id)_securityClientInterface;
+ (id)_purchaseServiceInterface;
+ (id)_cookieServiceInterface;
+ (void)_setUpSecurityInterfaceApplePayClassic:;
+ (void)_setUpSecurityInterfaceSilentEnrollmentSelector:;
+ (void)_setUpSecurityInterfaceBiometricSelectors:;
+ (id)_securityServiceInterface;
@end
