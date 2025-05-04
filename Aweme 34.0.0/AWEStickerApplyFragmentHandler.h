@interface AWEStickerApplyFragmentHandler : AWEStickerApplyBaseHandler
@property (nonatomic) IESEffectModel currentSticker;
@property (nonatomic) AWEVideoFragmentInfo lastFlowFragment;
@property (nonatomic) BOOL shouldUpdateLastFragment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)flowServiceDidAddPictureToVideo:;
- (void)flowServiceDidAddFragment:;
- (void)propServiceWillApplyProp:propSource:changeReason:;
- (void)setCurrentSticker:;
- (id)currentSticker;
- (void)handlerDidBecomeActive;
- (void)camera:didApplySticker:success:;
- (BOOL)shouldUpdateLastFragment;
- (void)setShouldUpdateLastFragment:;
- (id)lastFlowFragment;
- (id)p_getChallengeInfosFromProp:cuttentProp:;
- (void)setLastFlowFragment:;
- (id)viewModel;
- (void).cxx_destruct;
@end
