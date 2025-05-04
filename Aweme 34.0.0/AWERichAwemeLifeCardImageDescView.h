@interface AWERichAwemeLifeCardImageDescView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UILabel descriptionSecondLabel;
@property (nonatomic) UILabel extraDescriptionLabel;
- (id)extraDescriptionLabel;
- (void)setExtraDescriptionLabel:;
- (void)configSubviewsWithModel:;
- (id)descriptionSecondLabel;
- (void)setLayoutTitleLabelWithModel:topView:;
- (void)setLayoutDescLabelWithModel:topView:;
- (void)setLayoutDescSecondLabelWithModel:topView:;
- (void)setLayoutExtraLabelWithModel:LeftView:;
- (void)setDescriptionSecondLabel:;
- (void)setDescriptionLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)descriptionLabel;
@end
