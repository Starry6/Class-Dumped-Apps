@interface ISMachineDataProvisioningOperation : ISOperation
@property (nonatomic) BOOL allowsBootstrapCellularData;
@property (nonatomic) BOOL hidesServerDrivenDialogs;
@property (nonatomic) q protocolVersion;
@property (nonatomic) NSString userAgent;
- (long long)protocolVersion;
- (id)userAgent;
- (void)setProtocolVersion:;
- (void)setUserAgent:;
- (BOOL)allowsBootstrapCellularData;
- (void)setAllowsBootstrapCellularData:;
- (void)run;
- (void).cxx_destruct;
- (BOOL)hidesServerDrivenDialogs;
- (void)setHidesServerDrivenDialogs:;
- (id)initWithAccountIdentifier:provisioningData:;
- (BOOL)_finishProvisioningWithResponse:sessionID:error:;
- (id)_newFinishProvisioningOperationWithData:;
@end
