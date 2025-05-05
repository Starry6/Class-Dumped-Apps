@interface MPStoreItemMetadataCache : NSObject
@property (nonatomic) q count;
- (id)metadataForItemIdentifier:;
- (id)initWithCacheSize:;
- (id)addMetadata:forItemIdentifier:;
- (void).cxx_destruct;
- (void)removeExpiredMetadata;
- (long long)count;
- (id)metadataForItemIdentifier:ignoreExpiration:;
@end
