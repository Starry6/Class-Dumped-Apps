@interface IESECGoodsDetailHeaderCell : UICollectionViewCell
@property (nonatomic) IESECGoodsDetailHeaderBGView bgView;
@property (nonatomic) IESECoodsDetailHeaderContentBaseCell contentCell;
@property (nonatomic) IESECGoodsDetailHeaderServiceProvider serviceProvider;
@property (nonatomic) <IESECGoodsDetailHeaderStorageService> storage;
@property (nonatomic) double nowPadding;
- (void)clearView;
- (void)configWithModel:serviceProvider:;
- (double)nowPadding;
- (void)setNowPadding:;
- (void)layoutSubviews;
- (void)setStorage:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)storage;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)setServiceProvider:;
- (id)bgView;
- (void)setBgView:;
- (void)setupUI;
- (id)contentCell;
- (void)setContentCell:;
@end
