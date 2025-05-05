@interface IESECShopProductsMallCardEventHandler : NSObject
@property (nonatomic) UIView host;
- (void)handleMallEntranceClickWithEvent:isEntranceButton:;
- (void)handleProductClick:cell:atIndex:;
- (void)handleProductDidDisplay:cell:atIndex:;
- (id)initWithHybridContext:;
- (id)productTrackParams;
- (void)sendProductEvent:product:cell:atIndex:enableOnce:;
- (id)host;
- (void)setHost:;
- (void).cxx_destruct;
@end
