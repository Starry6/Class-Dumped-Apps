@interface AWEGDAlbumTabs : UIView
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) UIView indicatorView;
@property (nonatomic) UIView bottomLineView;
@property (nonatomic) q selectedIndex;
@property (nonatomic) q hasShowMaxOffsetx;
@property (nonatomic) NSMutableArray itemModels;
@property (nonatomic) NSMutableArray itemViews;
@property (nonatomic) q currentTrackIndex;
@property (nonatomic) AWEGoodsDetailPageContext context;
@property (nonatomic) @? onSelectBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bottomLineView;
- (void)setBottomLineView:;
- (void)setItemModels:;
- (id)itemModels;
- (id)onSelectBlock;
- (void)setOnSelectBlock:;
- (void)setSelectedIndex:animated:completion:;
- (void)trackShowTab;
- (void)layoutTabView;
- (void)updateIndicatorToIndex:animated:;
- (void)adjustScrollViewOffsetWithPreTabView:currenTabView:;
- (void)trackSwitchTab:toIndex:;
- (long long)currentTrackIndex;
- (void)setCurrentTrackIndex:;
- (long long)hasShowMaxOffsetx;
- (void)setHasShowMaxOffsetx:;
- (void)setScrollView:;
- (void)setSelectedIndex:;
- (id)initWithFrame:;
- (id)scrollView;
- (void)scrollViewDidScroll:;
- (long long)selectedIndex;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)indicatorView;
- (void)setIndicatorView:;
- (void)setupUI;
- (id)itemViews;
- (void)setItemViews:;
- (void)loadData:;
@end
