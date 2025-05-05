@interface IESECPDPSlideNetworkHelper : NSObject
@property (nonatomic) IESECPDPSlideViewReqContext context;
- (id)initWithReqContext:;
- (id)requestBaseParams;
- (void)requestLiveRoomGoodsList:;
- (void)requestLiveRoomGoodsListWithPromotion:productID:callback:;
- (void)requestWithParams:callback:;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
@end
