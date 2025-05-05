@interface UIActivityHeroActionCell : UIActivityActionCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView activityImageView;
@property (nonatomic) UIStackView stackView;
@property (nonatomic) NSLayoutConstraint bottomInsetConstraint;
@property (nonatomic) NSLayoutConstraint tallBottomInsetConstraint;
- (void)setDisabled:;
- (void)setTitleLabel:;
- (void)setStackView:;
- (void)prepareForReuse;
- (id)stackView;
- (id)initWithFrame:;
- (void)applyLayoutAttributes:;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)titleLabel;
- (id)activityImageView;
- (void)setActivityImageView:;
- (id)bottomInsetConstraint;
- (void)setBottomInsetConstraint:;
- (id)tallBottomInsetConstraint;
- (void)setTallBottomInsetConstraint:;
+ (long long)numberOfLinesForTitle:itemWidth:;
+ (double)heightForNumberOfLines:;
@end
