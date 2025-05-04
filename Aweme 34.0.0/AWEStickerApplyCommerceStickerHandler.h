@interface AWEStickerApplyCommerceStickerHandler : AWEStickerApplyBaseHandler
@property (nonatomic) IESEffectModel selectedSticker;
@property (nonatomic) NSMutableDictionary cachedCommerceStickerDict;
@property (nonatomic) NSMutableDictionary cachedUserDict;
@property (nonatomic) AWEOriginStickerUserView originStickerUserView;
- (id)selectedSticker;
- (void)setSelectedSticker:;
- (void)camera:willApplySticker:propSource:;
- (id)originStickerUserView;
- (void)setOriginStickerUserView:;
- (id)cachedCommerceStickerDict;
- (void)p_configOriginCreatorWithProp:;
- (id)cachedUserDict;
- (void)setCachedCommerceStickerDict:;
- (void)setCachedUserDict:;
- (void).cxx_destruct;
@end
