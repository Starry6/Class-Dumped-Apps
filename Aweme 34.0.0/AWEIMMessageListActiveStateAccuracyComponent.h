@interface AWEIMMessageListActiveStateAccuracyComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageListNaviBarTitleAvatarInterface> avatarComponent;
@property (nonatomic) AWEIMActiveUserAccuracyTrackTimer trackTimer;
@property (nonatomic) double sampleRate;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewDidAppear;
- (void)app_willResignActive;
- (void)app_didBecomeActive;
- (void)hostVC_afterFirstRender;
- (void)trackIfNeededWithIndex:;
- (BOOL)isViewOnWindow;
- (id)trackTimer;
- (void)setTrackTimer:;
- (id)avatarComponent;
- (void)setAvatarComponent:;
- (double)sampleRate;
- (void).cxx_destruct;
- (void)setSampleRate:;
+ (BOOL)canCreateComponentWithContext:;
@end
