@interface AMSPurchaseProtocolHandler : AMSURLProtocolHandler
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reconfigureNewRequest:originalTask:redirect:error:;
- (id)handleCompletionWithTask:metrics:decodedObject:;
- (void)setSession:;
- (BOOL)_shouldRetryForFailureAction:response:task:decodedObject:responseDictionary:;
- (void)AMSURLSession:task:handleDialogRequest:completion:;
- (id)_shouldRedirectWithPurchaseInfo:bag:urlAction:currentURL:;
- (void)_syncKeybagFromResponse:purchaseInfo:;
- (void)_updateSubscriptionStatusFromBody:account:;
- (id)_determineUpdatedBuyParamsFromResponse:urlAction:selectedAction:purchaseInfo:;
- (void)_updatePasswordSettingWithBuyParams:account:;
- (BOOL)_isEquivalentURL:toURL:;
- (void)AMSURLSession:task:handleEngagementRequest:completion:;
- (void)AMSURLSession:task:handleAuthenticateRequest:completion:;
- (void)_syncDiversityBagFromResponse:purchaseInfo:;
+ (double)reversePushSamplingPercentageForTask:;
@end
