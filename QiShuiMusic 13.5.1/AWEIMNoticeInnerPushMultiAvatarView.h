@interface AWEIMNoticeInnerPushMultiAvatarView : UIView
@property (nonatomic) UIImageView avatarFirstImageViewForNotice;
@property (nonatomic) UIImageView avatarSecondImageViewForNotice;
- (id)avatarFirstImageViewForNotice;
- (id)avatarSecondImageViewForNotice;
- (void)configWithAvatarURLArray:;
- (void)p_setupUI;
- (void)setAvatarFirstImageViewForNotice:;
- (void)setAvatarSecondImageViewForNotice:;
- (id)init;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
