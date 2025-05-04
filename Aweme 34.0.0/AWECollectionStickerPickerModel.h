@interface AWECollectionStickerPickerModel : NSObject
@property (nonatomic) NSArray stickers;
@property (nonatomic) IESEffectModel currentSticker;
@property (nonatomic) IESEffectModel stickerWillSelect;
- (void)setCurrentSticker:;
- (void)setStickerWillSelect:;
- (id)currentSticker;
- (id)stickerWillSelect;
- (void).cxx_destruct;
- (id)stickers;
- (void)setStickers:;
@end
