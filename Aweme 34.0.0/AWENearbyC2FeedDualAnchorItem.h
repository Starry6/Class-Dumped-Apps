@interface AWENearbyC2FeedDualAnchorItem : UIView
@property (nonatomic) AWENearbyLifeDualAnchorInfo data;
@property (nonatomic) UIView containerView;
@property (nonatomic) double leftMaxWidth;
@property (nonatomic) double itemsWidth;
@property (nonatomic) double itemMarginLeft;
- (void)setLeftMaxWidth:;
- (void)setItemMarginLeft:;
- (void)createItemViewListWithListData:maxWidth:;
- (void)setItemsWidth:;
- (double)itemsWidth;
- (double)itemMarginLeft;
- (void)configDataSourceWithData:maxWidth:;
- (double)anchorItemWidth;
- (double)leftMaxWidth;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setupUI;
+ (BOOL)containsChineseCharacters:;
@end
