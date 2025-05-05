@interface MRRemoveEndpointsMessage : MRProtocolMessage
@property (nonatomic) NSArray endpointUIDs;
- (unsigned long long)type;
- (id)initWithEndpointUIDs:;
- (id)endpointUIDs;
@end
