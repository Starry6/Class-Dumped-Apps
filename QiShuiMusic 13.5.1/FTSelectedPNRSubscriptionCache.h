@interface FTSelectedPNRSubscriptionCache : NSObject
@property (nonatomic) CTXPCServiceSubscriptionInfo subscriptionInfo;
@property (nonatomic) CTXPCContexts activeSubscriptionInfo;
@property (nonatomic) CTXPCServiceSubscriptionContext selectedContext;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) q dualSIMCapability;
- (id)phoneNumber;
- (void)setDualSIMCapability:;
- (void)setPhoneNumber:;
- (void)setSelectedContext:;
- (id)debugDescription;
- (long long)dualSIMCapability;
- (void)setSubscriptionInfo:;
- (id)subscriptionInfo;
- (id)selectedContext;
- (id)activeSubscriptionInfo;
- (void).cxx_destruct;
- (void)setActiveSubscriptionInfo:;
@end
