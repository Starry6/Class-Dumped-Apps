@interface IESECShopCacheManager : NSObject
@property (nonatomic) <HTSKVStore> kvStore;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (void)cleanExpiredDataIfNeed;
- (id)objectOfClass:forKey:;
- (void)setObject:forKey:duration:;
- (void)setKvStore:;
- (id)kvStore;
- (id)init;
- (void)setObject:forKey:;
- (id)allKeys;
- (id)serialQueue;
- (void).cxx_destruct;
- (void)setSerialQueue:;
- (void)removeObjectForKey:;
+ (id)sharedInstance;
@end
