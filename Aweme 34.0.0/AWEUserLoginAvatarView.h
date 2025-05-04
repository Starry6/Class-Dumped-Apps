@interface AWEUserLoginAvatarView : UIView
@property (nonatomic) UIImageView avatar;
@property (nonatomic) AWEUserLoginAvatarViewModel model;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)avatar;
- (void)setAvatar:;
@end
