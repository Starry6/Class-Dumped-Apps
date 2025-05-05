@interface IESECSKUTitleView : UIView
@property (nonatomic) UIStackView mainStackView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UILabel trailTitleLabel;
@property (nonatomic) IESECUIImageView arrowImage;
- (id)trailTitleLabel;
- (void)configWithTitle:subTtitle:trailTitle:hasArrow:;
- (void)setTrailTitleLabel:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void)clear;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:;
- (id)arrowImage;
- (void)setArrowImage:;
- (id)mainStackView;
- (void)setMainStackView:;
@end
