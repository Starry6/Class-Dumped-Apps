@interface AMSHandleDialogResultTask : AMSTask
@property (nonatomic) ACAccount account;
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) AMSProcessInfo clientInfo;
@property (nonatomic) NSString proxyBundleId;
@property (nonatomic) AMSDialogRequest request;
@property (nonatomic) AMSDialogResult result;
@property (nonatomic) NSError error;
- (id)account;
- (id)result;
- (void)setClientInfo:;
- (void)setAccount:;
- (id)clientInfo;
- (id)error;
- (id)request;
- (void).cxx_destruct;
- (id)bag;
- (id)perform;
- (id)initWithRequest:result:error:bag:;
- (id)initWithResult:bag:;
- (id)proxyBundleId;
- (void)setProxyBundleId:;
@end
