@interface Keychain : NSObject
+ (id)getKeychainQuery:;
+ (id)getValueForKey:class:;
+ (BOOL)saveValue:forKey:;
+ (BOOL)deleteValueForKey:;
@end
