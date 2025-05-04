@interface AWEDCFeedInnerCacheController : AWEDCFeedBaseController
@property (nonatomic) AWEDCFeedInnerCacheManager manager;
@property (nonatomic) AWEDCFeedInnerCacheConfig innerCacheConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerViewDidAppear:;
- (void)containerViewDidDisappear:;
- (void)onLoadMoreListDataEndWithReason:response:error:;
- (id)innerCacheConfig;
- (id)classNameWithReferString;
- (void)setInnerCacheConfig:;
- (void)cacheModelAddTag:;
- (void)removeConsumedCacheModelWithItemID:;
- (void)loadInnerCacheDataCompletion:;
- (void)setManager:;
- (void)dealloc;
- (id)manager;
- (void).cxx_destruct;
- (void)containerViewDidLoad;
@end
