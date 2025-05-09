@interface AWEFeedPlayableController : AWEBaseController
@property (nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> currentCell;
@property (nonatomic) NSMutableDictionary innerPrerenderAwemes;
@property (nonatomic) BOOL isInitialFetch;
@property (nonatomic) AWEPlayableWebViewPreloadManager playablePreloadManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)refreshCompletion:error:needAnimation:;
- (void)initialFetchCompletion:error:;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
- (BOOL)isInitialFetch;
- (void)setIsInitialFetch:;
- (void)preprocessAdAwemes:;
- (void)setPlayablePreloadManager:;
- (id)playablePreloadManager;
- (void)preRenderPlayableWithPreloadIndex:;
- (void)clearPrerenderedPlayableWithIndex:;
- (void)preprocessAdAwemes:fromIndex:;
- (void)preloadAlphaVideoResource:;
- (void)preRenderPlayableAwemeIfNeed:;
- (void)handleInteractiveVideo:;
- (void)setInnerPrerenderAwemes:;
- (void)preRenderSceneLynxCardIfNeeded:;
- (id)innerPrerenderAwemes;
- (id)interactiveStatusModelWithAweme:;
- (void)removePrerenderedAweme:;
- (void)preRenderPlayableAweme:url:;
- (void)resetInteractiveVideo:;
- (void)viewWillDisappear:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)viewDidLoad;
- (void)scrollViewWillBeginDecelerating:;
- (void)clear;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (void)setCurrentCell:;
- (id)currentCell;
@end
