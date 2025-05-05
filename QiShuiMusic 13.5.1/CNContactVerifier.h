@interface CNContactVerifier : NSObject
+ (BOOL)isValidContact:error:;
+ (BOOL)arePropertiesOfContact:authorizedForSavingWithContext:error:;
@end
