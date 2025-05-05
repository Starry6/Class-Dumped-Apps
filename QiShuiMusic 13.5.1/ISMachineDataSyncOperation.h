@interface ISMachineDataSyncOperation : ISOperation
@property (nonatomic) BOOL allowsBootstrapCellularData;
@property (nonatomic) BOOL hidesServerDrivenDialogs;
@property (nonatomic) q protocolVersion;
@property (nonatomic) NSString userAgent;
@property (nonatomic) NSString syncState;
- (long long)protocolVersion;
- (id)userAgent;
- (void)setProtocolVersion:;
- (void)setUserAgent:;
- (BOOL)allowsBootstrapCellularData;
- (void)setAllowsBootstrapCellularData:;
- (id)syncState;
- (void)run;
- (void).cxx_destruct;
- (BOOL)hidesServerDrivenDialogs;
- (void)setHidesServerDrivenDialogs:;
- (id)initWithAccountIdentifier:syncData:;
- (id)_newSyncOperationWithClientData:machineIDData:;
@end
