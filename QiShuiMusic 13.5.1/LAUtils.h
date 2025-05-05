@interface LAUtils : NSObject
+ (BOOL)isApplePayPolicy:;
+ (BOOL)hasBridge;
+ (BOOL)isSecureBootCapable;
+ (id)auditTokenToData:;
+ (BOOL)isApplePayPolicy:inApp:;
+ (BOOL)isDaytona;
+ (BOOL)callerRunningOnForeground:pid:;
+ (BOOL)isSharedIPad;
+ (BOOL)isBiometricOnlyPolicy:;
+ (id)truncateString:maxLength:;
+ (BOOL)isAppleSilicon;
+ (BOOL)isGibraltar;
@end
