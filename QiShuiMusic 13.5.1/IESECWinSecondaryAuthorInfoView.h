@interface IESECWinSecondaryAuthorInfoView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIButton goWindowBtn;
@property (nonatomic) <IESECWinSecondaryAuthorInfoViewDelegate> delegate;
- (void)setGoWindowBtn:;
- (void)goWindowAction;
- (id)goWindowBtn;
- (id)initWithAuthor:name:;
- (void)isFromInnerWindow:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)nameLabel;
- (void)setNameLabel:;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:;
@end
