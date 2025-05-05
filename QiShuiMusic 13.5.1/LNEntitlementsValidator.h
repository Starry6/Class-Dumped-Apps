@interface LNEntitlementsValidator : NSObject
+ (BOOL)validateEntitlement:secTaskRef:validator:;
+ (BOOL)validateEntitlement:auditToken:validator:;
+ (BOOL)validateEntitlement:forCurrentTaskWithValidator:;
@end
