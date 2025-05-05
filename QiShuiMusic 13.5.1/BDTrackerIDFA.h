@interface BDTrackerIDFA : NSObject
+ (BOOL)hasPermissionDescription;
+ (unsigned long long)authorizationStatus;
+ (id)trackingIdentifier;
+ (void)requestTrackingAuthorizationWithCompletionHandler:;
@end
