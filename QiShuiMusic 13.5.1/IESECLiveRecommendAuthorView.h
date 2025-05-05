@interface IESECLiveRecommendAuthorView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel nickNameLabel;
@property (nonatomic) IESECUIImageView hotIconImageView;
@property (nonatomic) UILabel hotLabel;
@property (nonatomic) IESECUIImageView adTagImageView;
- (id)adTagImageView;
- (id)hotIconImageView;
- (id)hotLabel;
- (id)nickNameLabel;
- (void)setAdTagImageView:;
- (void)setHotIconImageView:;
- (void)setHotLabel:;
- (void)setNickNameLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)updateWithModel:;
@end
