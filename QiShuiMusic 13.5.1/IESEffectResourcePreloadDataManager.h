@interface IESEffectResourcePreloadDataManager : NSObject
@property (nonatomic) FMDatabaseQueue dbQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) NSMutableDictionary resourceMap;
@property (nonatomic) NSMapTable resourceNameMap;
@property (nonatomic) NSString resourceFolder;
@property (nonatomic) NSString dbPath;
- (id)resourceNameMap;
- (void)setResourceMap:;
- (void)addOrUpdatePreloadResource:withBusinessKey:resourceSize:;
- (void)asyncRemovePreloadResourcesWithDeletedURIList:;
- (void)createFolderIfNeedWithPath:;
- (void)deleteAllExistPreloadResource;
- (void)deleteAllExistPreloadResourceWithAfterCompletion:;
- (void)deletePreloadResourceWithKey:businessKey:;
- (void)deletePreloadResourceWithResourceName:resourceURI:;
- (void)deletePreloadResourcesWithBusinessKeys:;
- (void)deleteRecordForPreloadResourceWithBusinessKey:completion:;
- (void)deleteRecordForPreloadResourceWithKey:businessKey:completion:;
- (id)getAllPreloadResourceRecord;
- (void)loadDataOrCreateDatabase;
- (void)loadPreloadResourceRecordList;
- (id)makeRecordWithPreloadResource:;
- (id)preloadResourcePathWithName:resourceURI:;
- (id)preloadResourceRecordWithName:;
- (id)resourceFolder;
- (id)resourceMap;
- (void)setDbPath:;
- (void)setResourceFolder:;
- (void)setResourceNameMap:;
- (unsigned long long)totalPreloadResourceSize;
- (void)updatePreloadResourceRecordIfNeedWithKey:businessKey:;
- (id)validResourcePathWithRecord:resourceURI:;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (id)dbPath;
- (void).cxx_destruct;
- (id)initWithPath:;
- (id)dbQueue;
- (void)setDbQueue:;
@end
