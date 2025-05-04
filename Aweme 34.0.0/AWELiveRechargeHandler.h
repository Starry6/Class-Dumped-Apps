@interface AWELiveRechargeHandler : NSObject
@property (nonatomic) <IESLiveChargeMonitorDelegate> monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preFetchProducts:completion:;
- (void)buyWithBizParams:completion:;
- (void)checkUnverifiedTransaction;
- (BOOL)shouldHandleTransactionOfProduct:;
- (void)awe_cjDidFinishProductOrder:success:error:;
- (void)addMonitor:forBusiness:;
- (void)setMonitor:;
- (id)monitor;
- (void).cxx_destruct;
@end
