@interface IESECShopMarqueeContentView : UIView
@property (nonatomic) UIView avatarImageViews;
@property (nonatomic) UILabel nickNameLabel;
@property (nonatomic) UILabel descLabel;
- (id)avatarImageViews;
- (id)descLabel;
- (id)nickNameLabel;
- (void)setAvatarImageViews:;
- (void)setDescLabel:;
- (void)setNickNameLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:;
@end
