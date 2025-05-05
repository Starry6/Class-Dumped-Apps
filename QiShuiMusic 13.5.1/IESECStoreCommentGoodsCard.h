@interface IESECStoreCommentGoodsCard : UIView
@property (nonatomic) IESECCommentGoodsInfoModel data;
@property (nonatomic) UIImageView mainPic;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) IESECGoodsPriceLabel priceLabel;
@property (nonatomic) UILabel praiseRate;
@property (nonatomic) UILabel stateLabel;
- (id)mainPic;
- (id)praiseRate;
- (void)setMainPic:;
- (void)setPraiseRate:;
- (void)setContent:;
- (id)init;
- (void)setTitleLabel:;
- (id)data;
- (void).cxx_destruct;
- (void)setData:;
- (id)titleLabel;
- (void)setupUI;
- (id)priceLabel;
- (void)setPriceLabel:;
- (id)stateLabel;
- (void)setStateLabel:;
+ (double)cardHeightWithDetail:;
@end
