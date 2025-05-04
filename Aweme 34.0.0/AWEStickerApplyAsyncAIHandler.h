@interface AWEStickerApplyAsyncAIHandler : AWEStickerApplyBaseHandler
@property (nonatomic) BOOL shouldHandleSticker;
- (void)sendMessageToEffect:;
- (void)camera:didApplySticker:success:;
- (void)camera:didRecvMessage:;
- (void)setShouldHandleSticker:;
- (BOOL)shouldHandleSticker;
- (void)handleArg3:;
- (void)receiveEffectCaptureImage:;
@end
