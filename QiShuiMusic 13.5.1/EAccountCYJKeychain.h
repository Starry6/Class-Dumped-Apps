@interface EAccountCYJKeychain : NSObject
+ (void)deleteWithKey:;
+ (id)getKeychainQuery:;
+ (void)save:data:;
+ (id)load:;
@end
