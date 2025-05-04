@interface AWEStickerApplySwitchCameraPositionHandler : AWEStickerApplyBaseHandler
@property (nonatomic) <ACCCameraSwapService> cameraSwapService;
- (void)camera:willApplySticker:propSource:;
- (id)cameraSwapService;
- (void)autoSwapCameraFront;
- (void)ar_prop_rear;
- (void)setCameraSwapService:;
- (void).cxx_destruct;
@end
