@interface AWEGouponC2FeedDualAnchorContainerView : UIView
@property (nonatomic) AWENearbyPaddingLabel adLabel;
@property (nonatomic) AWEGouponC2FeedDualAnchorView anchorView;
@property (nonatomic) UIView viewClickHandleView;
- (id)adLabel;
- (void)setAdLabel:;
- (id)viewClickHandleView;
- (void)updateAnchorInfoWithVideoAttr:maxWidth:;
- (void)updateInfoWithModel:maxWidth:;
- (void)shouldHiddenAdLabel:;
- (void)setViewClickHandleView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)anchorView;
- (void)setAnchorView:;
- (void)setupUI;
@end
