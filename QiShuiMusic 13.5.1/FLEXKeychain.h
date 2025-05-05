@interface FLEXKeychain : NSObject
+ (id)passwordForService:account:;
+ (id)passwordForService:account:error:;
+ (id)passwordDataForService:account:;
+ (id)passwordDataForService:account:error:;
+ (BOOL)deletePasswordForService:account:;
+ (BOOL)deletePasswordForService:account:error:;
+ (BOOL)setPassword:forService:account:;
+ (BOOL)setPassword:forService:account:error:;
+ (BOOL)setPasswordData:forService:account:;
+ (BOOL)setPasswordData:forService:account:error:;
+ (id)allAccounts;
+ (id)allAccounts:;
+ (id)accountsForService:;
+ (id)accountsForService:error:;
+ (id)accessibilityType;
+ (void)setAccessibilityType:;
@end
