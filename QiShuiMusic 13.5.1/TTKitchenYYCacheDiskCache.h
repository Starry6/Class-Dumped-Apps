@interface TTKitchenYYCacheDiskCache : NSObject
@property (nonatomic) YYCache kitchenYYCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cleanCacheLog;
- (id)getObjectOfClass:forKey:;
- (id)kitchenYYCache;
- (void)setKitchenYYCache:;
- (id)cachePath;
- (BOOL)containsObjectForKey:;
- (id)init;
- (void)setObject:forKey:;
- (void)addEntriesFromDictionary:;
- (void)clearAll;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
@end
