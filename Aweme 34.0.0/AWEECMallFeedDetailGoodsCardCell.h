@interface AWEECMallFeedDetailGoodsCardCell : UICollectionViewCell
@property (nonatomic) UIImageView goodsImageView;
@property (nonatomic) UIView coverMaskView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEECMallFeedDetailGoodsCardStackView tagStackView;
@property (nonatomic) AWEECCustomPriceLabel priceLabel;
@property (nonatomic) UILabel salesLabel;
@property (nonatomic) AWEAwemeModel currentAwemeModel;
@property (nonatomic) IESECGoodsDetailParameters goodsParameters;
@property (nonatomic) AWEECMallFeedProductModel productInfo;
- (id)currentAwemeModel;
- (void)setCoverMaskView:;
- (id)coverMaskView;
- (id)goodsImageView;
- (void)setGoodsImageView:;
- (void)updateViewWithModel:;
- (void)setCurrentAwemeModel:;
- (void)setSalesLabel:;
- (id)salesLabel;
- (id)tagStackView;
- (void)configProductTags:;
- (void)setTagStackView:;
- (id)goodsParameters;
- (void)setGoodsParameters:;
- (id)initWithFrame:;
- (id)productInfo;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setProductInfo:;
- (id)priceLabel;
- (void)setPriceLabel:;
@end
