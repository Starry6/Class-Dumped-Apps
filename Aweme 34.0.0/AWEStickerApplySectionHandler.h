@interface AWEStickerApplySectionHandler : AWEStickerApplyBaseHandler
@property (nonatomic) IESEffectModel currentSticker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (void)flowServiceDidAddFragment:;
- (void)setCurrentSticker:;
- (id)currentSticker;
- (void)cacheStickerWithSticker:cacheKey:;
- (void)handlerDidBecomeActive;
- (void)camera:willApplySticker:propSource:;
- (void).cxx_destruct;
@end
