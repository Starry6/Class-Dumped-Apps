@interface AWELiveExpoundCardCoinsInfoView : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel coinsInfoLabel;
@property (nonatomic) AWELiveLocalLifeProductRewardTaskInfoModel model;
- (id)coinsInfoLabel;
- (void)addGradientBackground;
- (void)updateSubviewsWithData:;
- (void)setCoinsInfoLabel:;
- (void)setModel:;
- (id)colors;
- (void)setBackgroundView:;
- (id)initWithFrame:;
- (id)backgroundView;
- (id)model;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setIconImageView:;
- (void)setupSubviews;
@end
