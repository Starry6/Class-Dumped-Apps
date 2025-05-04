@interface AWEAIMattingStickerHandler : ACCStickerHandler
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) <ACCEditServiceProtocol> editService;
- (id)editService;
- (void)setEditService:;
- (void)recoverSticker:;
- (void)commitAndRender;
- (double)containerViewScale;
- (BOOL)canRecoverSticker:;
- (id)boundingBoxSizeOf:;
- (void)trackStickerAdjust:gesture:lastGeometry:;
- (void)trackStickerClick:;
- (void)handlePanWithWrapperView:point:;
- (void)handlePinchWithWrapperView:scale:;
- (void)handleRotationWithWrapperView:rotation:;
- (void)handleMirroActionWrapperView:;
- (void)updateSlotFrameWithWrapperView:;
- (id)repository;
- (void).cxx_destruct;
- (id)canvasSize;
- (void)setRepository:;
- (id)initWithRepository:;
@end
