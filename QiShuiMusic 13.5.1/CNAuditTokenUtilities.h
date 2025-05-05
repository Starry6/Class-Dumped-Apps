@interface CNAuditTokenUtilities : NSObject
+ (int)processIdentifierForAuditToken:;
+ (id)processNameForAuditToken:;
+ (id)bundleIdentifierForAuditToken:;
+ (id)os_log;
+ (id)_bundleIdentifierFromEntitlementForAuditToken:;
+ (id)_bundleIdentifierFromInfoPlistForAuditToken:;
@end
