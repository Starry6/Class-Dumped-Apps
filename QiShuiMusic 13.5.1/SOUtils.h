@interface SOUtils : NSObject
+ (BOOL)isInternalBuild;
+ (id)teamIdentifierFromAuditToken:;
+ (void)unmapFile:data:;
+ (BOOL)isAppSSOServiceAvailable;
+ (id)processNameForPID:;
+ (BOOL)checkSignatureOfFile:teamIdentifier:trusted:signedBySet:certificates:error:;
+ (BOOL)auditTokenFromData:auditToken:;
+ (int)mmapFile:mode:mmapData:;
+ (BOOL)sandboxAllowsXPC:;
+ (id)bundleIdentifierFromAuditToken:;
+ (BOOL)checkEntitlementFromXPC:entitlement:;
+ (id)currentProcessContainerPath;
+ (BOOL)currentProcessIsSandboxed;
+ (int)pidFromAuditToken:;
+ (id)mapArray:usingBlock:;
+ (id)signatureSetToString:;
+ (id)currentProcessName;
@end
