@interface SSMachineDataRequest : SSRequest
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) NSData actionData;
@property (nonatomic) NSString actionName;
@property (nonatomic) BOOL allowsBootstrapCellularData;
@property (nonatomic) q protocolVersion;
@property (nonatomic) NSString userAgent;
@property (nonatomic) BOOL waitsForPurchaseOperations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)protocolVersion;
- (id)initWithXPCEncoding:;
- (id)userAgent;
- (void)setProtocolVersion:;
- (void)setUserAgent:;
- (id)copyXPCEncoding;
- (void)setAccountIdentifier:;
- (BOOL)allowsBootstrapCellularData;
- (id)accountIdentifier;
- (void)setAllowsBootstrapCellularData:;
- (void)startWithCompletionBlock:;
- (BOOL)waitsForPurchaseOperations;
- (void)setWaitsForPurchaseOperations:;
- (void)setActionData:;
- (void)setActionName:;
- (id)actionData;
- (void).cxx_destruct;
- (id)actionName;
- (id)initWithURLResponse:;
- (void)startWithDetailedCompletionBlock:;
@end
