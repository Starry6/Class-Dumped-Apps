@interface CTCarrierSpaceClientDelegateProxy : NSObject
@property (nonatomic) <CTCarrierSpaceClientDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)plansDidChange;
- (void)usageDidChange;
- (void)setDelegate:;
- (void)remoteObjectRespondsToSelector:handler:;
- (void)purchasedPlan:didChangeStatus:context:;
- (void)dataPlanMetricsDidChange;
- (id)delegate;
- (void).cxx_destruct;
- (void)userConsentFlowInfoDidChange;
- (void)appsDidChange;
- (void)capabilitiesDidChange:;
@end
