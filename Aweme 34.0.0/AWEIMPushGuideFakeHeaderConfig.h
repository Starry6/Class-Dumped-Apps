@interface AWEIMPushGuideFakeHeaderConfig : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString avatarURLString;
@property (nonatomic) NSString DUXIconKey;
@property (nonatomic) UIImage avatarIcon;
@property (nonatomic) UIImage tipsIcon;
@property (nonatomic) double avatarCornerRadius;
@property (nonatomic) q contentMode;
- (id)avatarIcon;
- (void)setAvatarIcon:;
- (id)avatarURLString;
- (double)avatarCornerRadius;
- (id)tipsIcon;
- (void)setTipsIcon:;
- (void)setAvatarURLString:;
- (void)setDUXIconKey:;
- (void)setAvatarCornerRadius:;
- (id)DUXIconKey;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)contentMode;
- (void)setContentMode:;
+ (id)defaultConfig;
@end
