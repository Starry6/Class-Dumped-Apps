@interface AWENoticeInnerPushMultiAvatarView : UIView
@property (nonatomic) UIImageView avatarFirstImageViewForNotice;
@property (nonatomic) UIImageView avatarSecondImageViewForNotice;
- (void)p_setupUI;
- (id)avatarFirstImageViewForNotice;
- (id)avatarSecondImageViewForNotice;
- (void)setAvatarSecondImageViewForNotice:;
- (void)setAvatarFirstImageViewForNotice:;
- (void)configWithAvatarURLArray:;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
