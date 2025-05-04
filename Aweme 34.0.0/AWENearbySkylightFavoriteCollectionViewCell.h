@interface AWENearbySkylightFavoriteCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIStackView stackView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIView gradientView;
@property (nonatomic) CAGradientLayer gradientLayer;
- (void)__buildUI;
- (void)__layoutUI;
- (id)stackView;
- (void)setStackView:;
- (id)gradientView;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)backgroundImageView;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setBackgroundImageView:;
@end
