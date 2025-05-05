@interface BU_IESGurdApplyPackageManager : NSObject
@property (nonatomic) NSMutableDictionary applyCompletionDictionary;
@property (nonatomic) NSMutableArray unzippingTempDirectorys;
@property (nonatomic) <BU_IESGurdApplyPackageManagerDelegate> delegate;
@property (nonatomic) @? zipBlock;
- (void)applyAllInactiveCacheWithCompletion:;
- (id)applyCompletionDictionary;
- (void)applyInactiveCacheForAccessKey:channel:completion:;
- (void)cleanTempFiles;
- (void)copyInactiveCacheWithMeta:completion:;
- (void)gurdDidApplyPackageWithInactiveMeta:;
- (void)handleApplyResult:error:inactiveMeta:startDate:;
- (void)innerUnzipWebCacheWithMeta:zipFilePath:tempDirectory:completion:;
- (void)saveInactivePackageMetaDataWithAccessKey:config:isPatch:;
- (void)setApplyCompletionDictionary:;
- (void)setUnzippingTempDirectorys:;
- (void)setZipBlock:;
- (void)traceEventWithInactiveMeta:message:hasError:;
- (void)unzipInactiveCacheWithMeta:completion:;
- (void)unzipWebCacheWithMeta:zipFilePath:completion:;
- (id)unzippingTempDirectorys;
- (void)updateResourcesWithMetaData:tempDirectory:completion:;
- (id)zipBlock;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
