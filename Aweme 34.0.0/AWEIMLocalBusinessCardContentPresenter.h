@interface AWEIMLocalBusinessCardContentPresenter : AWEIMGestureUIViewPresenter
@property (nonatomic) AWEIMUILabelPresenter titleLabel;
@property (nonatomic) AWEIMUILabelPresenter subTitleLabel;
@property (nonatomic) AWEIMWebImageViewPresenter avatarImageView;
- (void)didReceiveProps:;
- (id)initWithContext:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
