@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation
@property (nonatomic) BOOL shouldRequestLightweightStatus;
@property (nonatomic) ICMusicSubscriptionStatusRequest request;
@property (nonatomic) BOOL allowsFuseHeaderEnrichment;
@property (nonatomic) @? responseHandler;
- (id)initWithRequest:;
- (void)setAllowsFuseHeaderEnrichment:;
- (void)execute;
- (id)responseHandler;
- (void)setResponseHandler:;
- (BOOL)_carrierBundleStatusIsValidForCachedSubscriptionStatus:;
- (BOOL)allowsFuseHeaderEnrichment;
- (id)request;
- (void)_cacheAccountEligibilityWithStatus:requestContext:;
- (void)setShouldRequestLightweightStatus:;
- (BOOL)shouldRequestLightweightStatus;
- (void)_performSubscriptionStatusURLRequestWithRequestContext:subscriptionStatusURL:allowsAuthentication:completion:;
- (void).cxx_destruct;
@end
