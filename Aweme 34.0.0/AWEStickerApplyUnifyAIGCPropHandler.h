@interface AWEStickerApplyUnifyAIGCPropHandler : AWEStickerApplyBaseHandler
@property (nonatomic) BOOL shouldHandleProp;
@property (nonatomic) BOOL markComponentDidAppear;
@property (nonatomic) ACCStickerBlockApplyPredicate predicate;
- (id)publishModel;
- (void)componentDidAppear;
- (void)handlerDidBecomeActive;
- (void)camera:didApplySticker:success:;
- (void)camera:didRecvMessage:;
- (id)decodeArg3:;
- (BOOL)shouldApplyProp:;
- (BOOL)shouldHandleProp;
- (void)setShouldHandleProp:;
- (void)handleMessageIfNeeded:;
- (void)setMarkComponentDidAppear:;
- (BOOL)markComponentDidAppear;
- (id)predicate;
- (void)setPredicate:;
- (void).cxx_destruct;
@end
