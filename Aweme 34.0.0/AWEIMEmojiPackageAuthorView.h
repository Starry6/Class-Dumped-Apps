@interface AWEIMEmojiPackageAuthorView : UIView
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIImageView arrowIndicatorView;
@property (nonatomic) AWEIMEmojiMutableAuthorAvatarView mutableAvatarView;
@property (nonatomic) UIStackView titlesStack;
- (void)setTitlesStack:;
- (id)titlesStack;
- (void)__setupUIs;
- (id)mutableAvatarView;
- (id)arrowIndicatorView;
- (void)updateUIWithAuthorAvatarType:;
- (void)setArrowIndicatorView:;
- (void)setMutableAvatarView:;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (id)avatarView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
@end
