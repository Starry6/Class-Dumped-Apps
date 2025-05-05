@interface IESGurdResourceMetadataStorage : NSObject
+ (id)activeMetaForAccessKey:channel:;
+ (void)saveActiveMeta:;
+ (id)activeMetadataCache;
+ (void)clearAllMetadata;
+ (id)copyActiveMetadataDictionary;
+ (void)deleteActiveMetaForAccessKey:channel:;
+ (id)metadataCacheWithPath:metadataCapacity:metadataClass:enableIndexLog:;
+ (BOOL)migrateMetadataIfNeeded;
+ (void)setActiveMetadataCache:;
+ (void)setupMetadata;
@end
