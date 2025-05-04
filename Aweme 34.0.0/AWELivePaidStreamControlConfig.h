@interface AWELivePaidStreamControlConfig : NSObject
@property (nonatomic) q liveSource;
@property (nonatomic) <IESLivePlayerProtocol> streamPlayer;
@property (nonatomic) UIView trialView;
@property (nonatomic) UIView trialContainerView;
@property (nonatomic) @? trackParamHandler;
@property (nonatomic) @? paidPanelURLParamsHandler;
@property (nonatomic) @? playerShouldMuteAfterPromiseHandler;
- (long long)liveSource;
- (void)setLiveSource:;
- (void)setTrialContainerView:;
- (id)streamPlayer;
- (void)setStreamPlayer:;
- (id)trialView;
- (void)setTrialView:;
- (id)trialContainerView;
- (id)trackParamHandler;
- (void)setTrackParamHandler:;
- (id)paidPanelURLParamsHandler;
- (void)setPaidPanelURLParamsHandler:;
- (id)playerShouldMuteAfterPromiseHandler;
- (void)setPlayerShouldMuteAfterPromiseHandler:;
- (void).cxx_destruct;
@end
