@interface AWEDataLayerValueMetadataStorage : NSObject
- (void)updateMaxAge:forKey:userId:;
- (id)memoryCacheWithUserId:;
- (id)lruCacheWithUserId:;
- (id)databaseWithUserId:;
- (id)metadataWithKey:userId:cacheOptions:;
- (void)setMetadata:forKey:userId:cacheOptions:;
- (void)updateLastReadWithMetadata:forKey:userId:;
- (void)removeMetadataForKey:userId:;
- (void)removeAllMetadatasWithUserId:;
- (void).cxx_destruct;
- (void)clearMemoryCache;
+ (id)storageWithDomain:;
@end
