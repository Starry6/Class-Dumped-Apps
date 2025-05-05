@interface IESECGoodsDetailAuctionBidCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIStackView stackView;
@property (nonatomic) IESECLongContentLabelView headerView;
@property (nonatomic) IESECGoodsDetailAuctionBidModel dataModel;
@property (nonatomic) IESECGoodsDetailAuctionBidMetaModel metaModel;
@property (nonatomic) double margin;
@property (nonatomic) double padding;
- (void)addArrangedSubviewToStackViewContainer:;
- (id)metaModel;
- (void)openAuctionHistory:;
- (void)setMetaModel:;
- (void)setSeparateLineHidden:OfSubview:;
- (void)updateStackViewContainerWithArray:;
- (void)updateStackViewWithArray:;
- (void)updateWithAuctionBidModel:metaModel:;
- (void)setHeaderView:;
- (void)setStackView:;
- (double)margin;
- (void)setMargin:;
- (id)headerView;
- (id)stackView;
- (id)initWithFrame:;
- (void)setPadding:;
- (void).cxx_destruct;
- (double)padding;
- (id)dataModel;
- (void)setDataModel:;
- (void)setupUI;
@end
