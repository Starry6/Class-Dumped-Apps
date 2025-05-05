@interface MRUpdateEndpointsMessage : MRProtocolMessage
@property (nonatomic) NSArray endpoints;
@property (nonatomic) I features;
- (id)endpoints;
- (unsigned long long)type;
- (void).cxx_destruct;
- (unsigned int)features;
- (id)initWithEndpoints:endpointFeature:;
@end
