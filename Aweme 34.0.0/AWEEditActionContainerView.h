@interface AWEEditActionContainerView : UIScrollView
@property (nonatomic) NSArray itemDatas;
@property (nonatomic) NSArray itemViews;
@property (nonatomic) AWEEditActionContainerViewLayout containerViewLayout;
- (id)initWithItemDatas:containerViewLayout:;
- (void)setItemDatas:;
- (id)containerViewLayout;
- (id)itemSizeWithItem:;
- (id)intrinsicContentSizeForItemsInRange:;
- (id)findItemViewById:;
- (id)itemDatas;
- (void)dealloc;
- (id)intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViews;
- (id)itemViews;
- (void)setItemViews:;
@end
