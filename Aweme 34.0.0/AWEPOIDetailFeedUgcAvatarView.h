@interface AWEPOIDetailFeedUgcAvatarView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIImageView ornamentImageView;
@property (nonatomic) {UIEdgeInsets=dddd} ornamentInsets;
@property (nonatomic) <AWEPOIDetailFeedUgcAvatarViewDelegate> delegate;
- (id)ornamentImageView;
- (id)ornamentInsets;
- (void)updateWithAvatarURLArray:ornamentURLArray:;
- (void)setOrnamentInsets:;
- (void)setOrnamentImageView:;
- (id)delegate;
- (id)initWithFrame:;
- (id)alignmentRectInsets;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)tapAction:;
@end
