@interface AWEStorageServiceMetaDataManager : NSObject
- (id)makeMetaDataKeyWithDomain:key:;
- (void)removeMetaDataForKey:;
- (id)makeKeyWithMetaKey:;
- (void)setupMMKV;
- (void)releaseMMKV;
- (id)init;
- (void)setMetaData:forKey:;
- (id)metaDataForKey:;
- (void).cxx_destruct;
+ (id)manager;
@end
