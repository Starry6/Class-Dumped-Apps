@interface IESECGoodsSectionHeaderView : UICollectionReusableView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView topSeparator;
@property (nonatomic) IESECUIImageView arrowImage;
@property (nonatomic) @? clickBlock;
- (id)clickBlock;
- (void)clickHeader;
- (void)p_setupUI;
- (void)setClickBlock:;
- (id)contentView;
- (void)setTitleLabel:;
- (void)prepareForReuse;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (id)descriptionLabel;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (id)topSeparator;
- (void)setTopSeparator:;
- (id)arrowImage;
- (void)setArrowImage:;
@end
