@interface IESECGoodsDetailProcessFlowCollectionViewCell : UICollectionViewCell
@property (nonatomic) IESECLongContentLabelView titleLabel;
@property (nonatomic) IESECGoodsDetailProcessFlowView processFlowView;
@property (nonatomic) IESECGoodsDetailProcessFlowDataModel dataModel;
@property (nonatomic) IESECGoodsDetailProcessFlowMetaModel metaModel;
- (id)processFlowView;
- (void)configureCellWithModel:metaModel:;
- (void)handleProcessFlowTitle;
- (id)metaModel;
- (void)setMetaModel:;
- (void)setProcessFlowView:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)dataModel;
- (void)setDataModel:;
- (void)setupUI;
@end
