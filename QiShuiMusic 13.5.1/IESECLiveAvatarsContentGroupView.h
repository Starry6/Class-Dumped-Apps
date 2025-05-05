@interface IESECLiveAvatarsContentGroupView : UIView
@property (nonatomic) IESECLiveIconsGroupView avatarGroup;
@property (nonatomic) IESECLiveContentGroupView contentGroup;
@property (nonatomic) UIView baseColorView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_updateContentViewsConstraints;
- (void)setAvatarGroup:;
- (id)avatarGroup;
- (id)baseColorView;
- (id)contentGroup;
- (void)iconsGroupView:didResetURLsWithWidth:;
- (void)iconsGroupView:willAppendAvatarWithWidthGap:duration:;
- (void)setBaseColorView:;
- (void)setContentGroup:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
