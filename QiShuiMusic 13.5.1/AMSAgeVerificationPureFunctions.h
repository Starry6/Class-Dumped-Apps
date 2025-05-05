@interface AMSAgeVerificationPureFunctions : NSObject
+ (id)_isVerificationNeededForExpiration:ageVerificationEnabled:at:futureMoment:;
+ (BOOL)_isAgeVerificationNeededForExpiration:at:;
+ (BOOL)_isTimestamp:validAsOf:;
+ (id)_momentOfExpiryFrom:;
@end
