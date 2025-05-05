@interface CSJPreloadStatsModel : CSJBasicModel
@property (nonatomic) NSLock lock;
@property (nonatomic) BOOL preload_finish;
@property (nonatomic) BOOL preload_doc_finish;
@property (nonatomic) BOOL memory_cache_finish;
@property (nonatomic) BOOL preconnect_finish;
@property (nonatomic) BOOL onLoading;
- (BOOL)memory_cache_finish;
- (BOOL)onLoading;
- (BOOL)preconnect_finish;
- (BOOL)preload_doc_finish;
- (BOOL)preload_finish;
- (void)setMemory_cache_finish:;
- (void)setOnLoading:;
- (void)setPreconnect_finish:;
- (void)setPreload_doc_finish:;
- (void)setPreload_finish:;
- (id)init;
- (id)toDictionary;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
@end
