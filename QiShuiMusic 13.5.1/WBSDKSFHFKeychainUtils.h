@interface WBSDKSFHFKeychainUtils : NSObject
+ (id)getPasswordForUsername:andServiceName:error:;
+ (BOOL)storeUsername:andPassword:forServiceName:updateExisting:error:;
+ (BOOL)deleteItemForUsername:andServiceName:error:;
@end
