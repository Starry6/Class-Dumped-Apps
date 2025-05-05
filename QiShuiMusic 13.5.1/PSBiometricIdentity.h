@interface PSBiometricIdentity : NSObject
+ (id)identities;
+ (void)removeIdentity:;
+ (long long)maximumIdentityCount;
+ (id)nameForIdentity:;
+ (void)setName:forIdentity:;
+ (id)nextIdentityName;
@end
