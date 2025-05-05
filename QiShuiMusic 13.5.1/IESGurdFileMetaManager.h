@interface IESGurdFileMetaManager : NSObject
+ (id)activeMetaDictionary;
+ (void)cleanCacheMetaData;
+ (void)enumerateActiveMetaUsingBlock:;
+ (id)localMetaDataWithPath:;
+ (void)setActiveMetaDictionary:;
+ (void)setupMetaDataIfNeeded;
+ (BOOL)shouldMigrate;
@end
