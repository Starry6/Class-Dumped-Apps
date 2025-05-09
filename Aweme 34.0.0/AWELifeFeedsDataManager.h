@interface AWELifeFeedsDataManager : NSObject
@property (nonatomic) NSMutableArray parseTaskPool;
@property (nonatomic) NSMutableArray mergeTaskPool;
@property (nonatomic) NSMutableDictionary prefetchDataTaskMap;
@property (nonatomic) NSMutableDictionary fetchPrefetchDataHandlerMap;
@property (nonatomic) NSMutableArray fetchDataTaskPool;
- (id)fetchDataTaskPool;
- (id)mergeTaskPool;
- (id)removeNodes:pageViewModel:;
- (void)fetchMainDataWithParams:complete:;
- (void)fetchMoreWithParams:complete:;
- (void)mergePageViewModel:newPageViewModel:complete:;
- (void)fetchErrorPromptDataComplete:;
- (id)parseTaskPool;
- (void)setParseTaskPool:;
- (void)setMergeTaskPool:;
- (id)prefetchDataTaskMap;
- (id)prefetchDataTaskMap;
- (void)setPrefetchDataTaskMap:;
- (id)fetchPrefetchDataHandlerMap;
- (id)fetchPrefetchDataHandlerMap;
- (void)setFetchPrefetchDataHandlerMap:;
- (void)setFetchDataTaskPool:;
- (void)callFetchPrefetchDataTaskHandlerWithStorageId:pageViewModel:error:;
- (void)addFetchPrefetchDataHandler:storageId:complete:;
- (void)fetchPrefetchDataWithStorageId:target:complete:;
- (void)parseDataWithData:isCache:complete:;
- (void)parseDataWithData:complete:;
- (void).cxx_destruct;
+ (void)fetchPrefetchDataWithStorageId:target:complete:;
+ (void)prefetchDataWithStorageId:params:complete:;
+ (long long)getDatalistFromOuterCard:;
+ (id)sharedInstance;
@end
