@interface AWEStickerApplySwitchModeHandler : AWEStickerApplyBaseHandler
@property (nonatomic) IESEffectModel needRestoredProp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)switchModeServiceDidChangeMode:oldMode:;
- (void)handlerDidBecomeActive;
- (void)camera:didApplySticker:success:;
- (void)p_checkRestorePropAfterCaptureReady:oldMode:;
- (BOOL)needSaveRestoredPropModeId:;
- (void)p_storePropForSwitcMode;
- (id)needRestoredProp;
- (void)p_restorePropForSwitcMode;
- (void)setNeedRestoredProp:;
- (void).cxx_destruct;
@end
