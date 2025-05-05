@interface HTSKVStoreManager : NSObject
+ (id)storeWith:name:;
+ (void)clearAllKeyValue;
+ (id)defaultStoreWith:;
+ (id)mmkvInstanceCache;
+ (id)rootDirectoryPath;
+ (id)userDefaultInstanceCache;
@end
