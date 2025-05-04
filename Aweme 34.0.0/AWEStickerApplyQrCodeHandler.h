@interface AWEStickerApplyQrCodeHandler : AWEStickerApplyBaseHandler
@property (nonatomic) NSString pixaloopImgK;
@property (nonatomic) IESEffectModel currentSticker;
@property (nonatomic) UIImage qrcodeImage;
@property (nonatomic) BOOL isRequestOnAir;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)setCurrentSticker:;
- (id)currentSticker;
- (void)camera:didRecvMessage:;
- (void)camera:willApplySticker:propSource:;
- (void)p_resetWithSticker:;
- (void)didSelectNewSticker:oldSticker:;
- (void)setPixaloopImgK:;
- (id)pixaloopImgK;
- (void)renderQrCodeImage;
- (void)sendEnterFromMsg:;
- (id)qrcodeImage;
- (void)setQrcodeImage:;
- (void).cxx_destruct;
@end
