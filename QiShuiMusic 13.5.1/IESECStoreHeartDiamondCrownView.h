@interface IESECStoreHeartDiamondCrownView : UIView
@property (nonatomic) UIImageView heartDiamondCrownTitle;
@property (nonatomic) UIStackView heartDiamondCrownIcon;
@property (nonatomic) UIStackView heartDiamondCrownUnlightedIcon;
@property (nonatomic) UILabel heartDiamondCrownLabel;
@property (nonatomic) NSNumber percent;
- (void)updateTitleIcon;
- (id)heartDiamondCrownIcon;
- (id)heartDiamondCrownLabel;
- (id)heartDiamondCrownTitle;
- (id)heartDiamondCrownUnlightedIcon;
- (void)setHeartDiamondCrownIcon:;
- (void)setHeartDiamondCrownLabel:;
- (void)setHeartDiamondCrownTitle:;
- (void)setHeartDiamondCrownUnlightedIcon:;
- (void)updateHeartDiamondCrownViewWithModel:;
- (void)updateHeartDiamondCrownViewWithPercent:;
- (void)updateHeartDiamondCrownViewWithStyle:;
- (void)updateUnlightedIcon;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setupViews;
- (id)percent;
- (void)setPercent:;
@end
