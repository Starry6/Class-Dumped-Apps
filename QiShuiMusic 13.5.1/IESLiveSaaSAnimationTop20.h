@interface IESLiveSaaSAnimationTop20 : IESLiveSaaSAnimation
@property (nonatomic) NSArray avatarURLS;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) UIImage avatarImage;
- (id)avatarURLS;
- (void)preRenderFinished:;
- (void)setAvatarURLS:;
- (id)init;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)subTitle;
- (void)setAvatarImage:;
- (id)avatarImage;
@end
