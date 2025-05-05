@interface AMSDeviceIdentityCertificateTask : AMSTask
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) NSObject<OS_dispatch_queue> requestQueue;
- (void)setRequestQueue:;
- (id)requestQueue;
- (id)initWithBag:;
- (void)setBag:;
- (void).cxx_destruct;
- (id)bag;
- (id)performDeviceIdentityRequestForAbsinthe;
- (id)performDeviceIdentityRequestForFraudReport;
- (id)performDeviceIdentityRequestWithBaaOptions:ttlBagKey:logInformation:;
@end
