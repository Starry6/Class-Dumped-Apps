@interface AWEPlayInteractionUserAvatarSendMessageController : AWEBaseController
@property (nonatomic) BOOL shouldTrackSendViewShowingEvent;
@property (nonatomic) BOOL isShowVoipSendMessageView;
@property (nonatomic) BOOL hitLightInteractionReverse;
@property (nonatomic) BOOL isShowAudio;
@property (nonatomic) BOOL isShowVideo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userAvatarView;
- (BOOL)shouldShowSendMessageView;
- (void)updateSendMessageView:;
- (void)p_showSendMessageView:shouldShowSendMessageView:animated:completion:;
- (void)startAudioVoipEnterFrom:;
- (void)initController;
- (void)controllerViewDidDisappear;
- (void)controllerWillDisplay;
- (void)controllerDidEndDisplaying;
- (void)controllerViewDidLayout;
- (void)controllerStartConfigAvatarView:;
- (void)controllerPlay;
- (void)controllerReset;
- (BOOL)isShowVideo;
- (void)setIsShowVideo:;
- (BOOL)isShowAudio;
- (void)setIsShowAudio:;
- (BOOL)shouldShowVoipIcon;
- (BOOL)p_isShowVoipByAgeMinorOrHighlyDangerous;
- (void)setIsShowVoipSendMessageView:;
- (void)p_updateSendMessageView:;
- (BOOL)shouldTrackSendViewShowingEvent;
- (BOOL)shouldShowSendMessageGuideAnimation;
- (BOOL)isShowVoipSendMessageView;
- (void)configAndShowPopoverActionSheet;
- (BOOL)enableVoipCall;
- (void)setHitLightInteractionReverse:;
- (BOOL)hitLightInteractionReverse;
- (void)setShouldTrackSendViewShowingEvent:;
- (void)playSendMessageGuideAnimationIfNeeded;
- (void)onSendMessageViewClicked:;
- (void)startVideoVoipEnterFrom:;
- (id)viewModel;
- (id)model;
@end
