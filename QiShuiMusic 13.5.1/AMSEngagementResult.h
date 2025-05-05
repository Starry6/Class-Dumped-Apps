@interface AMSEngagementResult : NSObject
@property (nonatomic) NSString ams_buyParams;
@property (nonatomic) AMSCarrierLinkResult carrierLinkResult;
@property (nonatomic) AMSPurchaseResult purchaseResult;
@property (nonatomic) NSDictionary userInfo;
- (id)userInfo;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)purchaseResult;
- (void)setPurchaseResult:;
- (id)ams_buyParams;
- (id)ams_requestActionFromRequest:;
- (id)carrierLinkResult;
- (void)setCarrierLinkResult:;
+ (BOOL)supportsSecureCoding;
+ (id)_updatedBodyFromValue:request:;
@end
