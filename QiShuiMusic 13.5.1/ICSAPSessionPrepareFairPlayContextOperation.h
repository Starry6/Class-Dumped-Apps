@interface ICSAPSessionPrepareFairPlayContextOperation : ICAsyncOperation
@property (nonatomic) ICSAPSession sapSession;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)responseHandler;
- (void)setResponseHandler:;
- (void)_exchangeDataWithSAPContext:requestContext:setupURL:responseData:completionHandler:;
- (void)setSapSession:;
- (void).cxx_destruct;
- (id)sapSession;
@end
