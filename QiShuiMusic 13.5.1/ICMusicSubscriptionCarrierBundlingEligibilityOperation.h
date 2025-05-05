@interface ICMusicSubscriptionCarrierBundlingEligibilityOperation : ICAsyncOperation
@property (nonatomic) ICStoreRequestContext requestContext;
@property (nonatomic) BOOL deepLink;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)responseHandler;
- (void)setResponseHandler:;
- (id)requestContext;
- (void).cxx_destruct;
- (id)initWithRequestContext:;
- (void)setDeepLink:;
- (void)_finishEnrichmentWithBodyDictionary:completionHandler:;
- (id)_newDefaultRequestBodyDictionary;
- (id)_newDefaultRequestBodyDictionaryWithResponseCode:error:;
- (void)_sendEnrichmentRequestWithURL:preflightResponse:completionHandler:;
- (void)_sendPreflightRequestWithCompletionHandler:;
- (void)_sendSilentSMSRequestWithMessage:number:preflightResponse:completionHandler:;
- (BOOL)isDeepLink;
@end
