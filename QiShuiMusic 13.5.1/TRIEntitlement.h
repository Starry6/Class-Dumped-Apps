@interface TRIEntitlement : NSObject
+ (id)teamIdWithAuditToken:;
+ (BOOL)isEntitledToApplicationGroup:withAuditToken:;
+ (id)objectForCurrentProcessEntitlement:;
+ (id)_teamIdFromSecTaskWithAuditToken:;
+ (id)objectForEntitlement:withAuditToken:;
+ (id)valueForEntitlement:fromSecTask:ofType:;
+ (id)stringForEntitlement:withAuditToken:;
+ (id)stringForEntitlement:fromSecTask:;
+ (id)applicationBundleIdentifierWithAuditToken:;
+ (BOOL)_isValidFormatForTeamId:;
+ (id)entitlementKeyForApplicationBundleIdentifier;
+ (id)stringForCurrentProcessEntitlement:;
+ (id)applicationBundleIdentifierFromSelf;
+ (id)codeSignIdentifierWithAuditToken:;
@end
