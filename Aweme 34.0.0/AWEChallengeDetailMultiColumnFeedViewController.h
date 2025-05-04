@interface AWEChallengeDetailMultiColumnFeedViewController : AWEChallengeDetailBaseFeedViewController
@property (nonatomic) UIView emptyTipView;
@property (nonatomic) UILabel emptyTipLabel;
@property (nonatomic) UILabel emptyMainTipLabel;
@property (nonatomic) UIView adDismissPositionView;
- (id)zoomTransitionStartViewForOffset:;
- (id)emptySectionsPlaceholderView;
- (BOOL)shouldHideNoMoreText;
- (id)emptyTipView;
- (void)setEmptyTipView:;
- (id)previewingViewControllerAtIndexPath:;
- (void)updateFeedWithDataState:;
- (void)selectHeaderVideoAtIndex:;
- (void)createEmptyViewIfNeeded;
- (id)emptyMainTipLabel;
- (id)emptyTipLabel;
- (id)produceDismissAdView;
- (id)calculateFeedZoomTransitionStartViewWithModel:;
- (void)addAdDismissPositionViewIfNeeded;
- (id)adDismissPositionView;
- (void)setEmptyTipLabel:;
- (void)setEmptyMainTipLabel:;
- (void)setAdDismissPositionView:;
- (void).cxx_destruct;
+ (Class)viewModelClass;
@end
