@interface IESLiveAnchorRoomConfigContext : NSObject
@property (nonatomic) IESEffectModel entryFaceSticker;
@property (nonatomic) BOOL hasPlaybackAuth;
@property (nonatomic) BOOL onlyPlaybackAuth;
@property (nonatomic) BOOL hasRealTimePlayBackAuth;
@property (nonatomic) BOOL hasAudienceRecoredAuth;
@property (nonatomic) BOOL hasShopAndPlayBackAuth;
@property (nonatomic) BOOL hasAskExplainAuth;
@property (nonatomic) BOOL revertLive;
@property (nonatomic) BOOL restartLive;
@property (nonatomic) NSString liveAdditionalPrompt;
@property (nonatomic) NSDictionary sourceParams;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) BOOL enableShowChatTip;
@property (nonatomic) @ audioTheme;
@property (nonatomic) BOOL isNewAnchor;
@property (nonatomic) BOOL fastStartLive;
@property (nonatomic) q interactiveScene;
@property (nonatomic) BOOL autoShowInvitePanel;
@property (nonatomic) NSDictionary autoShowInvitePanelExtraTrackParams;
@property (nonatomic) @ chatroomResumeModel;
@property (nonatomic) BOOL hasWelfareAuth;
@property (nonatomic) NSString welfareInfoURLString;
@property (nonatomic) NSString welfareProjectId;
@property (nonatomic) IESLiveNativeAppBeforeLiveInfo nativeAppBeforeLiveInfo;
@property (nonatomic) BOOL isVRLiveMode;
@property (nonatomic) IESLiveGuideVRManager vrManager;
@property (nonatomic) NSDictionary bigPartyOpenGuideParams;
@property (nonatomic) <IESLiveAnchorPerfTrackService> anchorPerfTrack;
- (BOOL)isFastStartLive;
- (void)setTrackParams:;
- (id)anchorPerfTrack;
- (BOOL)hasPlaybackAuth;
- (void)setIsNewAnchor:;
- (void)setRestartLive:;
- (id)audioTheme;
- (BOOL)autoShowInvitePanel;
- (id)autoShowInvitePanelExtraTrackParams;
- (id)bigPartyOpenGuideParams;
- (id)chatroomResumeModel;
- (BOOL)enableShowChatTip;
- (id)entryFaceSticker;
- (BOOL)hasAskExplainAuth;
- (BOOL)hasAudienceRecoredAuth;
- (BOOL)hasRealTimePlayBackAuth;
- (BOOL)hasShopAndPlayBackAuth;
- (BOOL)hasWelfareAuth;
- (long long)interactiveScene;
- (BOOL)isNewAnchor;
- (BOOL)isRestartLive;
- (BOOL)isRevertLive;
- (BOOL)isVRLiveMode;
- (id)liveAdditionalPrompt;
- (id)nativeAppBeforeLiveInfo;
- (BOOL)onlyPlaybackAuth;
- (void)setAnchorPerfTrack:;
- (void)setAudioTheme:;
- (void)setAutoShowInvitePanel:;
- (void)setAutoShowInvitePanelExtraTrackParams:;
- (void)setBigPartyOpenGuideParams:;
- (void)setChatroomResumeModel:;
- (void)setEnableShowChatTip:;
- (void)setEntryFaceSticker:;
- (void)setFastStartLive:;
- (void)setHasAskExplainAuth:;
- (void)setHasAudienceRecoredAuth:;
- (void)setHasPlaybackAuth:;
- (void)setHasRealTimePlayBackAuth:;
- (void)setHasShopAndPlayBackAuth:;
- (void)setHasWelfareAuth:;
- (void)setInteractiveScene:;
- (void)setIsVRLiveMode:;
- (void)setLiveAdditionalPrompt:;
- (void)setNativeAppBeforeLiveInfo:;
- (void)setOnlyPlaybackAuth:;
- (void)setRevertLive:;
- (void)setSourceParams:;
- (void)setVrManager:;
- (void)setWelfareInfoURLString:;
- (void)setWelfareProjectId:;
- (id)sourceParams;
- (id)trackParams;
- (id)vrManager;
- (id)welfareInfoURLString;
- (id)welfareProjectId;
- (void).cxx_destruct;
@end
