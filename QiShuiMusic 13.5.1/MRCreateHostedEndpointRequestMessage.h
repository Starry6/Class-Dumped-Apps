@interface MRCreateHostedEndpointRequestMessage : MRProtocolMessage
@property (nonatomic) NSArray outputDeviceUIDs;
- (unsigned long long)type;
- (id)outputDeviceUIDs;
- (id)initWithOutputDeviceUIDs:;
@end
