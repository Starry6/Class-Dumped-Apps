@interface BDXFoldViewPro : UIView
@property (nonatomic) BDXPagerView foldView;
@property (nonatomic) BDXPageBaseView pageView;
@property (nonatomic) UIView headerView;
@property (nonatomic) UIView barView;
@property (nonatomic) double pinSectionHeaderOffset;
@property (nonatomic) <BDXFoldViewProDelegate> delegate;
@property (nonatomic) @? refreshViewInjectBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)foldView;
- (unsigned long long)heightForPinSectionHeaderInPagerView:;
- (BOOL)mainTableViewGestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (long long)numberOfListsInPagerView:;
- (id)pagerView:initListAtIndex:;
- (void)pagerView:listScrollViewDidScroll:;
- (void)pagerView:mainTableViewDidScroll:;
- (double)pinSectionHeaderOffset;
- (id)refreshViewInjectBlock;
- (void)refreshViewInjection:;
- (void)setFoldView:;
- (void)setPinSectionHeaderOffset:;
- (void)setRefreshViewInjectBlock:;
- (void)setupFoldView:scrollBarEnable:allowVerticalBounce:isRTL:;
- (void)setupRefreshViewIfNeeded;
- (void)setupViewsName;
- (unsigned long long)tableHeaderViewHeightInPagerView:;
- (id)tableHeaderViewInPagerView:;
- (id)viewForPinSectionHeaderInPagerView:;
- (id)pageView;
- (void)setHeaderView:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)headerView;
- (id)delegate;
- (void).cxx_destruct;
- (id)barView;
- (void)setBarView:;
- (void)setPageView:;
@end
