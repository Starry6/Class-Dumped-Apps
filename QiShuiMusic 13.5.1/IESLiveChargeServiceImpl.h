@interface IESLiveChargeServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)buyPayLiveProducWithBizParams:completion:;
- (void)buyProductWithIapPayModel:completion:;
- (void)checkLocalTransactionReceiptIfNeeded;
- (void)commitChargeDurationTrackerMark:;
- (void)preFetchPaidLiveIAPProductWithID:completion:;
- (id)serviceModel;
- (void)startupChargeService;
@end
