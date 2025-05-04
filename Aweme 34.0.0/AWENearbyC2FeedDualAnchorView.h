@interface AWENearbyC2FeedDualAnchorView : UIView
@property (nonatomic) NSMutableArray dataArray;
@property (nonatomic) double maxContainerWidth;
@property (nonatomic) UIView containerView;
@property (nonatomic) NSMutableArray itemViewList;
@property (nonatomic) double itemMarginLeft;
- (void)updateDualAnchorViewData:maxWidth:;
- (id)anchorContentSize;
- (void)setItemMarginLeft:;
- (double)itemMarginLeft;
- (void)setItemViewList:;
- (void)setMaxContainerWidth:;
- (void)p_resetItemsArray;
- (double)maxContainerWidth;
- (id)itemViewList;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)dataArray;
- (void)setupUI;
- (void)setDataArray:;
@end
