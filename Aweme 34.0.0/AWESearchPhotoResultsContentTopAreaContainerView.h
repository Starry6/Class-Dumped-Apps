@interface AWESearchPhotoResultsContentTopAreaContainerView : UIView
@property (nonatomic) AWEEcommerceSearchLynxBaseView lynxView;
@property (nonatomic) AWEDynamicPatchModel patchModel;
@property (nonatomic) UIView<AWESearchMerchandiseDoubleColumnCell> liveGoodsCell;
@property (nonatomic) UIView noIdenticalProductsHintView;
@property (nonatomic) AWEEcomPhotoSearchSectionTitleView titleView;
@property (nonatomic) @? containerViewHeightDidChanged;
- (id)lynxView;
- (void)setLynxView:;
- (double)getTopAreaContainerHeight;
- (void)setContainerViewHeightDidChanged:;
- (void)updateWithModel:searchInfoDict:;
- (id)patchModel;
- (void)lynxViewSizeChanged:;
- (void)setPatchModel:;
- (id)liveGoodsCell;
- (id)noIdenticalProductsHintView;
- (void)setLiveGoodsCell:;
- (void)configNoIdenticalProductsHintViewUIWithModel:;
- (void)updateLynxViewWithDynamicPatch:;
- (void)setNoIdenticalProductsHintView:;
- (id)containerViewHeightDidChanged;
- (id)titleView;
- (void)setTitleView:;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)updateTitle:;
@end
