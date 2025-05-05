@interface PuzzleStorageBridgeHelper : NSObject
+ (BOOL)containsObjectForBiz:key:;
+ (id)getAllBiz;
+ (id)getMMKVStore;
+ (id)getStorageWithBiz:key:;
+ (id)getStoreWithBiz:;
+ (id)getUserDefaultsStore;
+ (id)h5Key:;
+ (BOOL)old_containsObjectForKey:;
+ (id)old_getAllStorage;
+ (id)old_getStorageWithKey:;
+ (void)old_removeAllStorage;
+ (void)old_removeStorageWithKey:;
+ (void)old_setObject:withKey:;
+ (id)removePrefix:;
+ (void)removeStorageWithBiz:key:;
+ (void)saveBizIfNeed:;
+ (void)setObject:withBiz:key:;
+ (id)storeName:;
@end
