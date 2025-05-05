@interface IESGurdResourceMetadataCache : NSObject
@property (nonatomic) NSMutableDictionary metadataDictionary;
@property (nonatomic) IESMetadataStorage metadataStorage;
@property (nonatomic) NSInteger version;
@property (nonatomic) q metadataCount;
- (void)cacheMetadataInMemory:isDuplicated:;
- (void)clearAllMetadata;
- (id)copyMetadataDictionary;
- (void)deleteMetadataForAccessKey:channel:;
- (void)loadMetadataWithConfiguration:metadataClass:;
- (long long)metadataCount;
- (void)saveMetadata:;
- (id)metadataDictionary;
- (int)version;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (void)setMetadataDictionary:;
- (id)metadataStorage;
- (void)setMetadataStorage:;
+ (id)metadataCacheWithConfiguration:metadataClass:;
@end
