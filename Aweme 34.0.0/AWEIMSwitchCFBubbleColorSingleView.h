@interface AWEIMSwitchCFBubbleColorSingleView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView peerView;
@property (nonatomic) UIView ownView;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel descLabel;
- (id)descLabel;
- (void)setDescLabel:;
- (void)p_addSubviews;
- (void)p_setupConstraints;
- (void)p_setupUIWithConfig:;
- (void)updateWithSelected:;
- (void)setPeerView:;
- (void)setOwnView:;
- (id)peerView;
- (id)ownView;
- (void)setAvatarView:;
- (id)initWithConfig:;
- (id)contentView;
- (id)avatarView;
- (void).cxx_destruct;
- (void)setContentView:;
@end
