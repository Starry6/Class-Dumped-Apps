@interface IESLiveSaaSCouponAuthApi : IESLiveSaaSECommerceAPI
@property (nonatomic) @ networkObserver;
@property (nonatomic) IESLiveSaaSCouponPopupRoomContext storeAckPopupShowContext;
- (void)ackPopupDidShowWithRoomContext:;
- (id)buildCommonCouponPopupRequestParamsWithContext:popupModel:;
- (void)fetchCouponAuthPopupConfigWithRoomContext:completion:;
- (void)observeReachabilityNotifications;
- (void)onNetworkConnectionRestore;
- (void)requestPopupCouponWithRoomContext:popupModel:completion:;
- (void)setStoreAckPopupShowContext:;
- (id)storeAckPopupShowContext;
- (void)dealloc;
- (id)networkObserver;
- (void)setNetworkObserver:;
- (void).cxx_destruct;
@end
