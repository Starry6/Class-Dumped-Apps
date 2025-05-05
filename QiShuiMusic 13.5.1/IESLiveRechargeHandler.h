@interface IESLiveRechargeHandler : NSObject
@property (nonatomic) @? payCompletion;
@property (nonatomic) <IESLiveChargeMonitorDelegate> monitor;
@property (nonatomic) BOOL hasTriggerSetup;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasTriggerSetup;
- (void)addMonitor:forBusiness:;
- (BOOL)allowNewBuyingWithUnconfirmedProduct:newBuyingProductID:newOrderParams:;
- (id)businessIdentify:;
- (void)buyWithBizParams:completion:;
- (void)didFinishProductOrder:resultType:error:;
- (void)didFinishProductOrderInBack:resultType:error:;
- (void)event:params:;
- (void)p_didFinishProductOrder:product:success:error:;
- (id)payCompletion;
- (void)registerOpenLiveCertJSBrdige:;
- (void)setHasTriggerSetup:;
- (void)setPayCompletion:;
- (BOOL)shouldHandleProduct:;
- (void)startupService;
- (id)init;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
+ (id)sharedInstance;
@end
