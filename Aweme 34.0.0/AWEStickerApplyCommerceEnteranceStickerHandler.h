@interface AWEStickerApplyCommerceEnteranceStickerHandler : AWEStickerApplyBaseHandler
@property (nonatomic) AWEStickerCommerceEnterView commerceEnterView;
@property (nonatomic) NSString lastCommerceEnterEffectID;
- (void)camera:willApplySticker:propSource:;
- (id)lastCommerceEnterEffectID;
- (id)commerceEnterView;
- (void)setCommerceEnterView:;
- (void)setLastCommerceEnterEffectID:;
- (void)onCommerceEnterButton:;
- (void)didChangeLayoutManager:;
- (void).cxx_destruct;
@end
