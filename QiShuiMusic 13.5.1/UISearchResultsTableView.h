@interface UISearchResultsTableView : UITableView
@property (nonatomic) UISearchDisplayController controller;
@property (nonatomic) UIView _topShadowView;
- (void)setContentOffset:;
- (id)initWithFrame:style:;
- (void)setController:;
- (void).cxx_destruct;
- (id)controller;
- (void)_numberOfRowsDidChange;
- (void)_setOffsetForNoResultsMessage:;
- (double)_offsetForNoResultsMessage;
- (id)_topShadowView;
- (void)_setTopShadowView:;
@end
