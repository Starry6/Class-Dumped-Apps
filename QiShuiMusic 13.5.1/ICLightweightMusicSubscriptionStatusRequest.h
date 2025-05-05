@interface ICLightweightMusicSubscriptionStatusRequest : ICRequestOperation
@property (nonatomic) ICStoreRequestContext requestContext;
- (void)execute;
- (void)setRequestContext:;
- (void)performRequestWithResponseHandler:;
- (id)requestContext;
- (void).cxx_destruct;
- (id)initWithRequestContext:;
- (void)_finishWithExtendedSubscriptionStatusResponse:error:;
@end
