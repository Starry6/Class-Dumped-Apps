@interface AWEStickerApplyARTextInputHandler : AWEStickerApplyBaseHandler
@property (nonatomic) AWEARTextInputViewController arTextInputViewController;
@property (nonatomic) IESEffectModel currentSticker;
- (void)setCurrentSticker:;
- (id)currentSticker;
- (void)camera:didApplySticker:success:;
- (void)camera:didRecvMessage:;
- (id)arTextInputViewController;
- (void)setArTextInputViewController:;
- (void).cxx_destruct;
@end
