@interface MRUpdateActiveSystemEndpointMessage : MRProtocolMessage
@property (nonatomic) MRUpdateActiveSystemEndpointRequest request;
- (id)initWithRequest:;
- (id)request;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithUnderlyingCodableMessage:error:;
@end
