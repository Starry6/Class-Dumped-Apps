@interface AWEDCFeedTopAreaController : AWEDCFeedBaseController
@property (nonatomic) UIView custormView;
@property (nonatomic) AWEDCFeedSearchBarManager searchBarManager;
@property (nonatomic) UIView separatorView;
- (void)containerScrollViewDidScroll:;
- (id)containerViewModel;
- (void)containerViewWillAppear:;
- (void)containerCollectionView:didSelectItemAtIndexPath:;
- (void)onFetchListDataEndWithReason:response:error:;
- (void)onLoadMoreListDataEndWithReason:response:error:;
- (void)trigerSearchMagnifierClick;
- (id)topAreaConfig;
- (void)setSearchBarAlpha:;
- (void)showSeparatorView:;
- (id)classNameWithReferString;
- (void)setSearchBarPlaceHolderText:;
- (void)trigerSearchBarClick;
- (void)trigerSearchButtonClick;
- (void)trigerFetchGuessWord;
- (void)setupNoti;
- (void)updateViewFrameIfNeededWithScrollView:;
- (void)setCustormView:;
- (id)custormView;
- (void)setSearchBarManager:;
- (id)searchBarManager;
- (double)calculateCustorViewOffsetWithScrollView:;
- (void)setSeparatorView:;
- (void).cxx_destruct;
- (id)separatorView;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewDidLoad;
@end
