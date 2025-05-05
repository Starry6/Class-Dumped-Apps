@interface IESLiveEmoticonTabBar : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) NSMutableArray itemViews;
@property (nonatomic) @? didSelectTabWithPageItem;
- (void)locatePageItem:;
- (id)createTabItemViewWithPageItem:;
- (id)didSelectTabWithPageItem;
- (void)loadWithPageItems:;
- (void)selectTab:;
- (void)setDidSelectTabWithPageItem:;
- (id)backgroundView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (void)setupViews;
- (id)itemViews;
- (void)setItemViews:;
@end
