@interface TTKitchenMMKVDiskCache : NSObject
@property (nonatomic) MMKV kitchenMMKVCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getObjectOfClass:forKey:;
- (id)kitchenMMKVCache;
- (void)setKitchenMMKVCache:;
- (BOOL)containsObjectForKey:;
- (id)init;
- (void)setObject:forKey:;
- (void)addEntriesFromDictionary:;
- (void)clearAll;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
@end
