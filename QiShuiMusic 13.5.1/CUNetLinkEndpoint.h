@interface CUNetLinkEndpoint : NSObject
@property (nonatomic) (?={sockaddr=CC[14c]}{sockaddr_in=CCS{in_addr=I}[8c]}{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I}) ipAddr;
@property (nonatomic) BOOL client;
@property (nonatomic) NSInteger state;
@property (nonatomic) @? stateChangedHandler;
- (void)setStateChangedHandler:;
- (id)descriptionWithLevel:;
- (int)state;
- (void).cxx_destruct;
- (BOOL)isClient;
- (id)description;
- (id)stateChangedHandler;
- (id)ipAddr;
- (void)setIpAddr:;
@end
