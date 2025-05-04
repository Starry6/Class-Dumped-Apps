@interface AWEFindFriendsVerticalFunctionListSectionCell : UICollectionViewCell
@property (nonatomic) UIImageView leftImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) UIView line;
- (void)configWithModel:;
- (void)setRightButton:;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (id)rightButton;
- (void)setTitleLabel:;
- (id)line;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setLine:;
- (id)leftImageView;
- (void)setupLayout;
- (void)setLeftImageView:;
@end
