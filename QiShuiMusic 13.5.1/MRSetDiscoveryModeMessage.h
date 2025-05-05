@interface MRSetDiscoveryModeMessage : MRProtocolMessage
@property (nonatomic) I mode;
@property (nonatomic) MRAVRoutingDiscoverySessionConfiguration configuration;
- (unsigned long long)type;
- (id)configuration;
- (void).cxx_destruct;
- (unsigned int)mode;
- (id)initWithUnderlyingCodableMessage:error:;
- (id)initWithMode:configuration:;
- (id)initWithMode:features:;
@end
