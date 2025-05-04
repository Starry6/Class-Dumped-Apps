@interface AWEIMUserLabelTopGreetingMessageView : UIView
@property (nonatomic) AWEIMUserLabelTopGreetingMessageProps props;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) AWEIMUITagLabelViewContainer tagContainerView;
@property (nonatomic) UIButton profileButton;
- (void)p_addSubviews;
- (void)p_initSubviews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (id)profileButton;
- (void)onClickProfileButton:;
- (void)setProfileButton:;
- (id)tagContainerView;
- (void)setTagContainerView:;
- (void)setAvatarView:;
- (id)props;
- (id)initWithFrame:;
- (id)avatarView;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)avatarTapped:;
- (void)setProps:;
@end
