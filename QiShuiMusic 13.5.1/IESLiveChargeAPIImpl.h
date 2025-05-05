@interface IESLiveChargeAPIImpl : NSObject
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)checkFinalResultWithParams:completion:;
- (void)cj_fetchOrderInfoWithParams:source:extraParams:completion:;
- (void)fetchLiveChargeDataWithEntrance:fetchMoment:chargeContext:tintTags:isNotCNY:loadAllProducts:completion:;
- (void)fetchLiveWalletInfoFromSituation:secUserID:withCompletion:;
- (void)fetchPrivilegeTouchWithRoomId:completion:;
- (void)fetchWalletRechargePageWithParams:completion:;
- (void)m_fetchOrderIdWithError:duration:withParameters:withPath:;
- (void)monitorPrivilegeTouchWithDuration:error:;
- (void)p_prefetchImageData:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
