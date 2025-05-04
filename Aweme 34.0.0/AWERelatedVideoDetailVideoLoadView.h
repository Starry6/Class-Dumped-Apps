@interface AWERelatedVideoDetailVideoLoadView : UIView
@property (nonatomic) UIView expandedView;
@property (nonatomic) AWERVDetailPageContext pageContext;
@property (nonatomic) UIView mutiTabListView;
- (id)mutiTabListView;
- (id)initWithFrame:expandedView:;
- (void)setMutiTabListView:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setPageContext:;
- (id)pageContext;
- (id)expandedView;
- (void)setExpandedView:;
@end
