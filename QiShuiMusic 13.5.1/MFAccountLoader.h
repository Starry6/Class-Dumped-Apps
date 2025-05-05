@interface MFAccountLoader : NSObject
+ (id)accountWithPersistentAccount:error:;
+ (Class)accountClassForPersistentAccount:error:;
+ (id)_accountClassStringWithPersistentAccount:error:;
+ (Class)_accountClassForString:error:;
+ (BOOL)loadBundleForAccountClassString:error:;
+ (id)_bundlePathForAccountClassString:;
+ (id)accountWithAccountTypeIdentifier:error:;
@end
