@interface IESLiveAvatarContainerView : UIView
@property (nonatomic) IESLiveGradientView containerView;
@property (nonatomic) {CGSize=dd} mSize;
@property (nonatomic) UIView whiteBorderView;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) IESLiveGradientView borderView;
- (id)whiteBorderView;
- (void)setMSize:;
- (void)setWhiteBorderView:;
- (void)setBorderColor:;
- (id)borderColor;
- (id)avatarView;
- (id)containerView;
- (void)setContainerView:;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)borderView;
- (id)mSize;
@end
