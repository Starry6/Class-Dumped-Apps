@interface IESLiveInteractionKTVCommonServiceImpl : NSObject
@property (nonatomic) IESLiveExclusiveService ktvExclusiveService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isMultiAudioKTV;
- (void)showSelectedOrderTabWithParams:;
- (void)didSetAttachingDIContext;
- (void)fastStartSelectedOrderTabWithParams:;
- (BOOL)isLinkMicGuestWithUid:;
- (id)ktvExclusiveService;
- (void)setKtvExclusiveService:;
- (void)showKTVHighScorePanelWithTargetUserName:targetUserId:source:;
- (void)trackHighScoreMarkClickWithTargetUserId:source:;
- (void)trackHighScoreMarkShowWithTargetUserId:source:;
- (unsigned long long)currentScene;
- (void).cxx_destruct;
@end
