@interface IESECWinGoodsSmallPhotoView : UIView
@property (nonatomic) UIImageView goodsImageView;
@property (nonatomic) IESECGoodsPriceLabel goodsPriceLabel;
@property (nonatomic) NSObject viewModel;
@property (nonatomic) <IESECWinGoodsSmallPhotoTap> tapPhotoDelegate;
- (id)goodsPriceLabel;
- (id)goodsImageView;
- (void)setGoodsImageView:;
- (void)setGoodsPriceLabel:;
- (void)setTapPhotoDelegate:;
- (id)tapPhotoDelegate;
- (void)tapPhotoView;
- (id)init;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setViewModel:;
- (void)setupViews;
- (void)updateWithModel:;
@end
