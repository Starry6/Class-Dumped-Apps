@interface AWEStickerApplyBindingMusicHandler : AWEStickerApplyBaseHandler
@property (nonatomic) IESEffectModel currentAppliedSticker;
@property (nonatomic) IESEffectModel lastWillApplyProp;
- (void)camera:didApplySticker:success:;
- (void)camera:willApplySticker:propSource:;
- (BOOL)p_shouldPickForceBindMusic;
- (id)lastWillApplyProp;
- (id)currentAppliedSticker;
- (void)setLastWillApplyProp:;
- (void)setCurrentAppliedSticker:;
- (void).cxx_destruct;
@end
