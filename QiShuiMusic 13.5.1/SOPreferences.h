@interface SOPreferences : NSObject
+ (BOOL)boolValueForKey:defaultValue:;
+ (BOOL)isAssociatedDomainValidated;
+ (BOOL)isExtensionSignatureValidated;
@end
