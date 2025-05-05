@interface ICDelegationPlayInfoRequestOperation : ICAsyncOperation
@property (nonatomic) ICDelegationPlayInfoRequest playInfoRequest;
@property (nonatomic) ICStoreRequestContext storeRequestContext;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)responseHandler;
- (void)setResponseHandler:;
- (void).cxx_destruct;
- (id)storeRequestContext;
- (void)finishWithError:;
- (void)setStoreRequestContext:;
- (void)finishWithResponse:requestDate:error:;
- (void)_finishWithResult:tokens:error:;
- (id)playInfoRequest;
- (void)setPlayInfoRequest:;
@end
