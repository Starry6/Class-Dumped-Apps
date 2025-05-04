@interface AWEEcomSearchTopSectionGoodsView : UIView
@property (nonatomic) AWEEcommerceSearchLynxBaseView lynxView;
@property (nonatomic) AWEDynamicPatchModel patchModel;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) BOOL hideInitially;
@property (nonatomic) @? rightButtonDidClicked;
- (id)lynxView;
- (void)setLynxView:;
- (void)configUI;
- (id)patchModel;
- (void)preloadLynxWithModel:;
- (void)lynxViewSizeChanged:;
- (void)updateGoodsInfo:;
- (void)rightButtonAction:;
- (void)setRightButtonDidClicked:;
- (void)scrollWithProgress:;
- (void)setPatchModel:;
- (void)setHideInitially:;
- (BOOL)hideInitially;
- (id)rightButtonDidClicked;
- (void)setRightButton:;
- (id)initWithFrame:;
- (id)rightButton;
- (void).cxx_destruct;
@end
