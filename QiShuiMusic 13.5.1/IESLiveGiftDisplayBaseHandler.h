@interface IESLiveGiftDisplayBaseHandler : NSObject
@property (nonatomic) <IESLiveGiftDisplayHandlerProtocol> nextHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setNextHandler:;
- (BOOL)enableDisplayWithGift:context:;
- (id)nextHandler;
- (void).cxx_destruct;
@end
