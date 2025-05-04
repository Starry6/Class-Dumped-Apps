@interface AWEAwemeNewDetailPlayableController : AWEAwemeNewDetailBaseController
@property (nonatomic) AWEPlayableWebViewPreloadManager playablePreloadManager;
@property (nonatomic) NSMutableDictionary prerenderAwemes;
- (void)initialFetchCompletion:error:;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
- (void)loadPreviousCompletion:error:isHeaderRefreshing:;
- (id)prerenderAwemes;
- (void)setPrerenderAwemes:;
- (void)preprocessAdAwemes:;
- (void)setPlayablePreloadManager:;
- (id)playablePreloadManager;
- (void)preRenderPlayableWithPreloadIndex:;
- (void)clearPrerenderedPlayableWithIndex:;
- (void)preprocessAdAwemes:fromIndex:;
- (void)preloadAlphaVideoResource:;
- (void)preRenderPlayableAwemeIfNeed:;
- (void)viewWillDisappear:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
