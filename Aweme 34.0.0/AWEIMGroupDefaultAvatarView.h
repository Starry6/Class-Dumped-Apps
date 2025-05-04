@interface AWEIMGroupDefaultAvatarView : UIView
@property (nonatomic) UIImageView leftAvatarImageView;
@property (nonatomic) UIImageView rightAvatarImageView;
- (void)__updateLayer;
- (void)updateWithDefaultAvartarAndGivenAvatartURL:;
- (void)updateWithLeftAvararURL:rightAvararURL:;
- (id)leftAvatarImageView;
- (id)rightAvatarImageView;
- (void)setLeftAvatarImageView:;
- (void)setRightAvatarImageView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
