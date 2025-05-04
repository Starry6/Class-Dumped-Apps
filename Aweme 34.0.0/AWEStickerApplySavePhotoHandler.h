@interface AWEStickerApplySavePhotoHandler : AWEStickerApplyBaseHandler
@property (nonatomic) IESEffectModel currentSticker;
@property (nonatomic) NSMutableArray stickerSavePhotoNames;
- (void)setCurrentSticker:;
- (id)currentSticker;
- (void)camera:didApplySticker:success:;
- (void)camera:didRecvMessage:;
- (void)camera:willApplySticker:propSource:;
- (void)camera:didTakeAction:error:data:;
- (void)p_fetchStickerWaterMarkImage:;
- (void)p_handleStickerSavePhoto:;
- (void)setStickerSavePhotoNames:;
- (id)stickerSavePhotoNames;
- (void).cxx_destruct;
@end
