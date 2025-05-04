@interface AWEStickerApplyTimeConsumingPropHandler : AWEStickerApplyBaseHandler
@property (nonatomic) BOOL shouldHandleProp;
@property (nonatomic) @? handler;
- (void)sendMessageToEffect:;
- (id)publishModel;
- (void)handlerDidBecomeActive;
- (void)camera:didApplySticker:success:;
- (void)camera:didRecvMessage:;
- (void)camera:willApplySticker:;
- (void)receiveEffectCaptureImage:;
- (id)decodeArg3:;
- (BOOL)shouldHandleProp;
- (void)toggleTimeConsumingFlowOnOff:;
- (void)toggleTimeConsuminguploadIsRender;
- (void)setShouldHandleProp:;
- (BOOL)isDisabledPath;
- (double)extendDurationOfSticker:;
- (void)handleMessageIfNeeded:;
- (void)handleResourceReady;
- (void)handleTimeConsumingPropMessage:originalStringMsg:;
- (void)handleDidStartGenerating:;
- (void)handleDidEndGenerating:;
- (void)handleReadyForTransition:;
- (void)handleDidFailGenerating:parseBody:;
- (void)setHandler:;
- (void)resetData;
- (id)handler;
- (void).cxx_destruct;
@end
