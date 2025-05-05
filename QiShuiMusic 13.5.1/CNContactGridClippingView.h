@interface CNContactGridClippingView : UIView
@property (nonatomic) CNAvatarView avatarView;
@property (nonatomic) CAShapeLayer actionsMaskLayer;
@property (nonatomic) BOOL masksToAvatar;
- (void)layoutSubviews;
- (id)avatarView;
- (void)setAvatarView:;
- (void).cxx_destruct;
- (void)setMasksToAvatar:;
- (BOOL)masksToAvatar;
- (id)actionsMaskLayer;
- (void)setActionsMaskLayer:;
@end
