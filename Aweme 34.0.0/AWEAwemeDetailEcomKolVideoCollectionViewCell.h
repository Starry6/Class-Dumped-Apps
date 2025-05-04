@interface AWEAwemeDetailEcomKolVideoCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView videoImageView;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel nickNameLabel;
@property (nonatomic) UIImageView playIconImageView;
@property (nonatomic) UILabel followLabel;
@property (nonatomic) CAGradientLayer gradientLayer;
- (id)playIconImageView;
- (void)setPlayIconImageView:;
- (id)nickNameLabel;
- (void)setNickNameLabel:;
- (id)videoImageView;
- (id)followLabel;
- (void)updateSelected:;
- (void)setVideoImageView:;
- (void)setFollowLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)updateModel:;
@end
