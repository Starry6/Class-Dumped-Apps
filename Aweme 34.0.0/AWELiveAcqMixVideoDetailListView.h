@interface AWELiveAcqMixVideoDetailListView : UIView
@property (nonatomic) AWELiveAcqCastVideoMixListDataManager dataController;
@property (nonatomic) AWEMixVideoModel mixVideoModel;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) UILabel noContentTipLabel;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) BOOL hasFirstRequested;
@property (nonatomic) BOOL jumpRequested;
@property (nonatomic) NSNumber jumpEpisode;
@property (nonatomic) UITableView tableView;
@property (nonatomic) double topOffset;
@property (nonatomic) <AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataController:;
- (void)loadmore;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)addLoadMoreIfNeeded;
- (id)videoAtIndex:;
- (id)mixVideoModel;
- (void)setMixVideoModel:;
- (void)updateMixInfo:;
- (void)setJumpRequested:;
- (void)setJumpEpisode:;
- (BOOL)jumpRequested;
- (id)jumpEpisode;
- (void)setHasFirstRequested:;
- (id)noContentTipLabel;
- (BOOL)isNeedToHideCollectButton;
- (void)setNoContentTipLabel:;
- (BOOL)hasFirstRequested;
- (void)setTopOffset:;
- (double)topOffset;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)initWithViewModel:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)setHasMore:;
- (void)setLoadingView:;
- (id)viewModel;
- (id)tableView;
- (id)loadingView;
- (BOOL)hasMore;
- (void)setViewModel:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (long long)numberOfVideos;
- (id)dataController;
@end
