@interface AWESpecialCardDispatchManager : NSObject
@property (nonatomic) NSMutableArray cardProxyArray;
@property (nonatomic) <AWESpecialCardDelegateCallProtocol> dispatchController;
- (id)dispatchController;
- (void)setDispatchController:;
- (void)registerCardController:;
- (id)getCardProxyWithBusinessID:;
- (id)cardProxyArray;
- (void)setCardProxyArray:;
- (void).cxx_destruct;
@end
