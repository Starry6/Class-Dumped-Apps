@interface ATTrackingManager : NSObject
+ (void)tm_hook_idfa_requestTrackingAuthorizationWithCompletionHandler:;
+ (void)tm_hook_idfa_preload;
+ (void)tspk_idfa_preload;
+ (void)tspk_idfa_requestTrackingAuthorizationWithCompletionHandler:;
+ (BOOL)_userAllowedToChangeSettings;
+ (BOOL)_applicationHasDisqualifyingEntitlement;
+ (BOOL)_restrictionProfileInstalled;
+ (BOOL)_isCrossAppTrackingAllowed;
+ (void)_sendRequestTrackingAnalytic:prompted:deniedReason:;
+ (void)_sendTrackingStatusAnalytic:prompted:deniedReason:;
+ (unsigned long long)_trackingAuthorizationStatus;
+ (unsigned long long)trackingAuthorizationStatus;
+ (BOOL)applicationStateActive;
+ (BOOL)isApplicationExtension;
+ (void)requestTrackingAuthorizationWithCompletionHandler:;
@end
