@interface AWEUserLoginBackgroundView : UIView
@property (nonatomic) AWELoginBackgroundView fullScreenBgView;
@property (nonatomic) UIImageView halfScreenThemeBgView;
@property (nonatomic) AWEUserLoginBackgroundModel model;
@property (nonatomic) BOOL isAmbientHeadViewShown;
- (void)setupFullScreenUI;
- (void)showHeaderView;
- (void)p_monitorLoadImage:duration:imageURL:imageType:activityId:error:;
- (BOOL)isAmbientHeadViewShown;
- (void)setupHalfScreenUI;
- (long long)customStatusBarStyle;
- (id)fullScreenBgView;
- (void)setFullScreenBgView:;
- (id)halfScreenThemeBgView;
- (void)setHalfScreenThemeBgView:;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (void)setupUI;
- (void)hideHeaderView;
- (void)updateModel;
@end
