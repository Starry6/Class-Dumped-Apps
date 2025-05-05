@interface IESLiveDynamicGiftFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveDynamicGiftStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentCreate;
- (BOOL)appendEffectComposerNodes:withTag:;
- (void)componentBindService;
- (void)componentUnmount;
- (id)currentDynamicGiftId;
- (id)dynamicGiftPlayer;
- (void)forceHideWebViewPanel;
- (BOOL)isShowingDynamicGift;
- (void)recordCaptureAssemblyGiftInfo:;
- (BOOL)removeEffectComposerNodes:;
- (void)sendEffectMessageToLynx:arg1:arg2:arg3:;
- (BOOL)sendGiftEffectMessageWithParam2:param3:;
- (void)startEffectWithRenderOnSingleView:masterLayerId:effectMessageDispatcher:completion:;
- (void)startPlayingDynamicGiftWithGiftAnimationNode:;
- (void)startPlayingDynamicGiftWithGiftID:;
- (void)stopEffectWithCompletion:;
- (void)stopPlayingDynamicGift;
- (void)trackDynamicGiftOnEndingWithComboCount:;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
+ (BOOL)isMixed;
@end
