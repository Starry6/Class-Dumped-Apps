@interface ISMachineDataActionOperation : ISOperation
@property (nonatomic) SSMachineDataRequest machineDataRequest;
@property (nonatomic) BOOL blocksPurchaseRequests;
@property (nonatomic) BOOL hidesServerDrivenDialogs;
@property (nonatomic) @? resultBlock;
@property (nonatomic) NSString userAgent;
@property (nonatomic) NSString syncState;
- (id)userAgent;
- (id)uniqueKey;
- (void)setUserAgent:;
- (id)syncState;
- (void)run;
- (id)resultBlock;
- (BOOL)_shouldRetryAfterError:;
- (void)setResultBlock:;
- (void).cxx_destruct;
- (id)initWithMachineDataRequest:;
- (BOOL)blocksPurchaseRequests;
- (BOOL)hidesServerDrivenDialogs;
- (id)machineDataRequest;
- (void)setBlocksPurchaseRequests:;
- (void)setHidesServerDrivenDialogs:;
- (BOOL)_eraseProvisioning;
- (BOOL)_provisionWithRequest:error:;
- (BOOL)_syncMachineWithRequest:error:;
@end
