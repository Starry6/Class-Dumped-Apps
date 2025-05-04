@interface AWELiveHotPointPanelTableViewController : AWEHotPointPanelTableViewController
@property (nonatomic) BOOL cellEnableClick;
@property (nonatomic) <AWELiveHotPointPanelTableVCDelegate> emptyPageDelegate;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (void)configureUI;
- (void)trackTrendingTopicForEvent:searchModel:indexPath:withOtherParams:;
- (BOOL)shouldCurrentPanelStyleShowRecommendHotWords;
- (double)constHeaderHeight;
- (void)setCellEnableClick:;
- (void)setEmptyPageDelegate:;
- (BOOL)cellEnableClick;
- (id)emptyPageDelegate;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (Class)tableViewCellClass;
- (double)viewHeight;
@end
