@interface AMSAnisetteProvisionTask : AMSTask
@property (nonatomic) ACAccount account;
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) NSData data;
@property (nonatomic) q type;
- (id)account;
- (id)data;
- (long long)type;
- (void).cxx_destruct;
- (id)bag;
- (id)initWithData:type:account:bag:;
- (id)performProvisioning;
- (id)_createFinishProvisioningRequestWithClientData:error:;
- (BOOL)_processFinishProvisioningResult:sessionID:error:;
- (id)_startProvisioningWithOutputSessionID:error:;
@end
