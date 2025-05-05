@interface MRVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage
@property (nonatomic) I capabilities;
@property (nonatomic) NSString endpointUID;
@property (nonatomic) NSString outputDeviceUID;
- (unsigned int)capabilities;
- (id)outputDeviceUID;
- (unsigned long long)type;
- (id)endpointUID;
- (id)initWithCapabilities:endpointUID:outputDeviceUID:;
@end
