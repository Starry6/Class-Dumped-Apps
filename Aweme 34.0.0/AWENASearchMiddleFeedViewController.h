@interface AWENASearchMiddleFeedViewController : AWESearchMiddleBaseViewController
@property (nonatomic) AWESearchCachalotCardPipeline naPipeline;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerBridge;
- (void)componentDidFinishRender:withViewModel:;
- (void)handleMessage:callback:;
- (void)sendHistoryLiveTagRequest;
- (id)initWithRouterModel:;
- (BOOL)enableGSPrefetch;
- (void)fetchGuessedSearchKeyword;
- (void)p_sendHotListRequest;
- (id)getStringArrayFromString:;
- (void)p_reloadHistory;
- (id)naPipeline;
- (id)p_fetchHistoryWords;
- (id)getMiddlePageConfig;
- (void)syncHistoryIfNeeded;
- (void)reloadCachalotView;
- (BOOL)enableMiddlePagePrefetch;
- (id)customGenerateCachalotView;
- (void)setNaPipeline:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void).cxx_destruct;
@end
