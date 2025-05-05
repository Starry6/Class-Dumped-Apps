@interface IESECGoodsDetailDetailPropertySKUFlowView : IESECHorizonFlowView
@property (nonatomic) IESECGoodsDetailDetailTopInfoViewModel viewModel;
@property (nonatomic) IESECGoodsDetailDetailTopInfoDataModel dataModel;
@property (nonatomic) IESECGoodsDetailDetailTopInfoMetaModel metaModel;
- (void)handleActionForCell:atIndexPath:;
- (id)itemSizeAtIndex:;
- (id)metaModel;
- (void)setMetaModel:;
- (void)setProperLocationOfSelectedSKUIfNeeded;
- (id)viewModel;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)dataModel;
- (void)setDataModel:;
- (void)updateWithViewModel:;
+ (double)heightOfPropertySKUViewWithDataSource:;
+ (id)itemSizeForData:;
@end
