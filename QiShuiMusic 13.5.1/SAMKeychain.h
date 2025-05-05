@interface SAMKeychain : NSObject
+ (BOOL)cj_save:forKey:;
+ (id)accountsForService:error:;
+ (id)allAccounts:;
+ (BOOL)cj_deleteForKey:;
+ (id)cj_stringForKey:;
+ (id)passwordDataForService:account:error:;
+ (BOOL)setPasswordData:forService:account:error:;
+ (id)passwordDataForService:account:;
+ (BOOL)setPasswordData:forService:account:;
+ (id)accountsForService:;
+ (id)allAccounts;
+ (id)passwordForService:account:;
+ (id)passwordForService:account:error:;
+ (BOOL)deletePasswordForService:account:;
+ (BOOL)deletePasswordForService:account:error:;
+ (BOOL)setPassword:forService:account:;
+ (BOOL)setPassword:forService:account:error:;
+ (id)accessibilityType;
+ (void)setAccessibilityType:;
@end
