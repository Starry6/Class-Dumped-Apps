@interface AWEStickerApplyFaceCountHandler : AWEStickerApplyBaseHandler
@property (nonatomic) BOOL needsFaceCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handlerDidBecomeActive;
- (void)camera:didRecvMessage:;
- (void)camera:didTakeAction:error:data:;
- (void)setNeedsFaceCount:;
- (BOOL)needsFaceCount;
@end
