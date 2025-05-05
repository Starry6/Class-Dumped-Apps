@interface NENexusFlow : NSObject
@property (nonatomic) ^{nw_protocol=[16C]^{nw_protocol_identifier}^{nw_protocol_callbacks}^{nw_protocol}^v^{nw_protocol}^v} protocol;
@property (nonatomic) Q state;
@property (nonatomic) NWEndpoint endpoint;
@property (nonatomic) NWParameters parameters;
@property (nonatomic) NSUUID clientIdentifier;
- (id)protocol;
- (void)setProtocol:;
- (void)dealloc;
- (void)setState:;
- (id)parameters;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)endpoint;
- (id)clientIdentifier;
@end
