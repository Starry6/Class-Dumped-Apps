@interface AWEIMAutoSearchGiphyCache : NSObject
@property (nonatomic) AWEIMAutoSearchGiphyDataBase database;
@property (nonatomic) AWEIMAutoSearchGiphyPipelineNode refreshCacheNode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)p_addObserver;
- (void)p_setupDataBase;
- (void)removeContentWithContext:completion:;
- (void)saveContentWithContext:completion:;
- (void)contentORMWithSearchKey:completion:;
- (void)didClickWithSearchKey:completion:;
- (void)mostRecentClickTimeWithCompletion:;
- (void)invalidSearchKeysWithLimit:cacheExpireInterval:extraSearchKeysBlock:completion:;
- (void)deleteContentBeforeTimestamp:;
- (void)deleteContentWithQueries:beforeTimestamp:;
- (id)refreshCacheNode;
- (void)setRefreshCacheNode:;
- (void)setDatabase:;
- (id)database;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)defaultCache;
@end
