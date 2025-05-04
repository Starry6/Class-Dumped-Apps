@interface AWEIMGroupShareTextCommandView : UIView
@property (nonatomic) AWEIMGroupDefaultAvatarView defaultAvatarView;
@property (nonatomic) UIImageView avatarsView;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UILabel textCommandLabel;
@property (nonatomic) UIImageView textCommandBackgroupView;
@property (nonatomic) AWEIMGroupShareTextCommandViewModel model;
- (void)renderModel:context:;
- (void)__layoutComponents;
- (id)avatarsView;
- (void)setAvatarsView:;
- (id)textCommandLabel;
- (id)defaultAvatarView;
- (id)textCommandBackgroupView;
- (void)setDefaultAvatarView:;
- (void)setTextCommandLabel:;
- (void)setTextCommandBackgroupView:;
- (void)setModel:;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (id)descriptionLabel;
@end
