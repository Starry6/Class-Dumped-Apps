@interface AWECorpTaskViewCell : UICollectionViewCell
@property (nonatomic) UIImageView avatorImageView;
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) YYLabel descriptionLabel;
- (void)makeConstraints;
- (void)configWithTask:;
- (id)avatorImageView;
- (void)updateAvatarImageView:;
- (void)updateTitleText:;
- (void)updateDescriptionText:;
- (void)updateTaskConstraints;
- (void)setAvatorImageView:;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)descriptionLabel;
- (void)_setupUI;
+ (id)identifier;
@end
