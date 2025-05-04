@interface AWEUserLoginCustomBackgroundView : AWEUserLoginBackgroundView
@property (nonatomic) AWELoginBackgroundView fullScreenBgView;
@property (nonatomic) AWEUserLoginBackgroundModel model;
@property (nonatomic) BOOL hasAvatarView;
- (void)setupFullScreenUI;
- (id)initWithModel:hasAvatarView:;
- (long long)customStatusBarStyle;
- (id)fullScreenBgView;
- (void)setFullScreenBgView:;
- (BOOL)hasAvatarView;
- (void)setHasAvatarView:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (void)setupUI;
@end
