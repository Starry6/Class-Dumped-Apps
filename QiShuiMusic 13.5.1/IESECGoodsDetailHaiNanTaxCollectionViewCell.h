@interface IESECGoodsDetailHaiNanTaxCollectionViewCell : UICollectionViewCell
@property (nonatomic) IESECGoodsDetailLongTitleTagInfoView titleTagInfoView;
@property (nonatomic) UIStackView groupTabItemStackView;
@property (nonatomic) UIStackView container;
@property (nonatomic) IESECGoodsDetailHaiNanTaxDataModel hainanTaxDataModel;
@property (nonatomic) IESECGoodsDetailHaiNanTaxViewMetaModel metaModel;
- (void)configureHaiNanTaxCellWithDataModel:metaModel:;
- (id)createHeadButtonWithElement:;
- (id)groupTabItemStackView;
- (id)hainanTaxDataModel;
- (id)metaModel;
- (void)openDeliveryDesc:;
- (void)setGroupTabItemStackView:;
- (void)setHainanTaxDataModel:;
- (void)setMetaModel:;
- (void)setTitleTagInfoView:;
- (void)tapTabButton:;
- (id)titleTagInfoView;
- (void)setContainer:;
- (id)container;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
