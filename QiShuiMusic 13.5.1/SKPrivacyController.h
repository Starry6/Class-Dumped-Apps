@interface SKPrivacyController : NSObject
+ (long long)authorizationStatus;
+ (void)requestAuthorization:;
+ (id)_sharedCloudServiceStatusMonitor;
+ (long long)_authorizationStatusFromUnderlyingAuthorizationStatus:;
@end
