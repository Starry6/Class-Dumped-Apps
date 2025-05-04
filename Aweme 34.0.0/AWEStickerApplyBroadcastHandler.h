@interface AWEStickerApplyBroadcastHandler : AWEStickerApplyBaseHandler
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)flowServiceStateDidChanged:preState:;
- (void)flowServiceWillBeginTakePicture;
- (void)handlerDidBecomeActive;
- (void)camera:didApplySticker:success:;
- (void)camera:willApplySticker:propSource:;
- (void)p_recordCurrentStickerId;
@end
