@interface IESLiveChargeErrorHandleManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)pr_needCustomHandleChargeError:;
- (void)chargeFaildWithError:source:chargeModel:trackerInfo:;
- (void)chargeFaildWithError:trackerInfo:;
- (id)p_schemeQueryInfo:;
- (void)pr_exchangeAntiSpam;
- (void)pr_handleChareErrorLocal:model:trackerInfo:;
- (void)pr_handleChargeError:trackerInfo:;
- (id)pr_modifyScheme:queryParams:;
- (BOOL)pr_needCustomHandleOptimizeError:;
+ (id)sharedInstance;
@end
