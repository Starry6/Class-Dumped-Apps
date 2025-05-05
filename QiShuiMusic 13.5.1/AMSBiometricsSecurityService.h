@interface AMSBiometricsSecurityService : NSObject
+ (id)isAvailableForAccount:;
+ (id)isIdentityMapValid;
+ (id)saveIdentityMap;
@end
