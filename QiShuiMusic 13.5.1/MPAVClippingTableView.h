@interface MPAVClippingTableView : UITableView
@property (nonatomic) NSMutableDictionary sectionBackgroundViews;
@property (nonatomic) UIView headerBackgroundView;
@property (nonatomic) UIView footerBackgroundView;
- (void)layoutSubviews;
- (id)initWithFrame:style:;
- (id)_createBackgroundView;
- (void).cxx_destruct;
- (id)backgroundViewForSection:;
- (id)headerBackgroundView;
- (void)setHeaderBackgroundView:;
- (id)footerBackgroundView;
- (void)setFooterBackgroundView:;
- (id)sectionBackgroundViews;
- (void)setSectionBackgroundViews:;
@end
