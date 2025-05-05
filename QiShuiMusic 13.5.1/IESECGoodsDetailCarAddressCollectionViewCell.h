@interface IESECGoodsDetailCarAddressCollectionViewCell : UICollectionViewCell
@property (nonatomic) IESECLongContentLabelView titleView;
@property (nonatomic) UILabel mainTextView;
@property (nonatomic) UILabel distanceTextView;
@property (nonatomic) UILabel subTextView;
@property (nonatomic) IESECGoodsDetailCarAddressMetaModel metaModel;
@property (nonatomic) IESECGoodsDetailCarAddressDataModel dataModel;
- (void)setSubTextView:;
- (void)configureCellWithModel:metaModel:;
- (id)distanceTextView;
- (id)mainTextView;
- (id)metaModel;
- (void)openCarAddressSelectLynxView:;
- (void)setDistanceTextView:;
- (void)setMainTextView:;
- (void)setMetaModel:;
- (id)subTextView;
- (void)setTitleView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleView;
- (id)dataModel;
- (void)setDataModel:;
- (void)setupUI;
@end
