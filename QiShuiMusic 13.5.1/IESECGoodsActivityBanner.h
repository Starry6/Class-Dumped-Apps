@interface IESECGoodsActivityBanner : UIView
@property (nonatomic) q type;
@property (nonatomic) q viewStyle;
@property (nonatomic) Q rectCorner;
@property (nonatomic) {CGSize=dd} rectCornerRadius;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) IESECGoodsDiscountPriceView discountPriceView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel activityNameLabel;
@property (nonatomic) <IESECGoodsPriceLabelModel> activityPrice;
@property (nonatomic) IESECGoodsPriceLabel priceLabel;
@property (nonatomic) IESECGoodsPriceLabel marketPriceLabel;
@property (nonatomic) UIImageView ipLogoImageView;
@property (nonatomic) UILabel rightLabelForSmallMode;
@property (nonatomic) UILabel rightCountdownLabel;
@property (nonatomic) IESECGoodsDetailParameters parameters;
@property (nonatomic) UIView activityIconView;
@property (nonatomic) UILabel leftToplabel;
@property (nonatomic) UILabel separator;
- (id)ipLogoImageView;
- (void)setupPriceLabel;
- (id)activityIconView;
- (id)activityNameLabel;
- (id)activityPrice;
- (id)discountPriceView;
- (void)handleActivityStateChangeNotification:;
- (void)handleActivityUpdateNotification:;
- (id)initWithFrame:parameters:type:style:;
- (id)leftToplabel;
- (id)marketPriceLabel;
- (void)maskToRectCorner:ofSize:;
- (unsigned long long)rectCorner;
- (id)rectCornerRadius;
- (id)rightCountdownLabel;
- (id)rightLabelForSmallMode;
- (void)setActivityIconView:;
- (void)setActivityNameLabel:;
- (void)setActivityPrice:;
- (void)setDiscountPriceView:;
- (void)setIpLogoImageView:;
- (void)setLeftToplabel:;
- (void)setMarketPriceLabel:;
- (void)setRectCorner:;
- (void)setRectCornerRadius:;
- (void)setRightCountdownLabel:;
- (void)setRightLabelForSmallMode:;
- (void)setupActivityLabel;
- (void)setupGradientLayer;
- (void)setupRightViewForBigMode;
- (void)setupRightViewForIPActivity;
- (void)updateDiscountPriceView;
- (void)updateHalfScreenView;
- (void)updateMarketPriceLabel;
- (void)updatePriceLabel;
- (void)setSeparator:;
- (id)backgroundImageView;
- (void)dealloc;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setType:;
- (long long)viewStyle;
- (id)parameters;
- (long long)type;
- (void).cxx_destruct;
- (void)setParameters:;
- (id)iconImageView;
- (void)setViewStyle:;
- (id)separator;
- (void)setIconImageView:;
- (void)setBackgroundImageView:;
- (id)priceLabel;
- (void)setPriceLabel:;
+ (id)activityBannerWithFrame:parameters:style:;
+ (Class)layerClass;
@end
