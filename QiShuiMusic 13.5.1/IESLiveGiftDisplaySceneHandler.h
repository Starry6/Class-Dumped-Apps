@interface IESLiveGiftDisplaySceneHandler : NSObject
@property (nonatomic) BOOL giftPKForLinkMicFix;
@property (nonatomic) <IESLiveGiftDisplayHandlerProtocol> nextHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setNextHandler:;
- (BOOL)enableDisplayWithGift:context:;
- (BOOL)giftPKForLinkMicFix;
- (id)nextHandler;
- (void)setGiftPKForLinkMicFix:;
- (id)init;
- (void).cxx_destruct;
@end
