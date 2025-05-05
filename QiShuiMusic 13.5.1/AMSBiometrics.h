@interface AMSBiometrics : NSObject
+ (id)disableForAccount:;
+ (id)_stateHeaderValueForAccount:;
+ (BOOL)isActionSupported:withAccessControl:;
+ (id)handleResponse:session:taskInfo:;
+ (long long)deviceState;
+ (BOOL)isActionSupported:withConstraints:;
+ (id)headersWithAccount:options:signatureResult:;
+ (void)setDeviceState:;
+ (id)setState:forAccount:;
+ (id)minimumACLVersionForAction:;
+ (BOOL)deleteKeysWithError:;
+ (BOOL)_shouldAddBiometricHeader;
+ (BOOL)isAvailableForAccount:;
+ (long long)type;
+ (id)ACLVersionForAccessControl:;
+ (id)identityMap;
+ (id)signChallenge:withAccount:clientInfo:options:;
+ (id)ACLVersionForConstraints:;
+ (BOOL)isIdentityMapValid;
+ (long long)stateForAccount:;
+ (id)resumptionHeadersFromRequest:;
+ (BOOL)_deleteKeysWithOptions:error:;
+ (id)ACLVersionForAccount:options:error:;
+ (void)saveIdentityMap;
@end
