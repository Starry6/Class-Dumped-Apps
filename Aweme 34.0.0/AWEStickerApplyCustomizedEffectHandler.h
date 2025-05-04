@interface AWEStickerApplyCustomizedEffectHandler : AWEStickerApplyBaseHandler
@property (nonatomic) IESEffectModel currentSticker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCurrentSticker:;
- (id)currentSticker;
- (void)handlerDidBecomeActive;
- (void)camera:didApplySticker:success:;
- (void)preloadPropAnnotationsIfNeed;
- (void)saveFrameSamplingImages;
- (void)markUsedCustomizedEffect;
- (void).cxx_destruct;
@end
