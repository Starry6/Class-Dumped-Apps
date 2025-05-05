@interface MRVolumeDidChangeMessage : MRProtocolMessage
@property (nonatomic) float volume;
@property (nonatomic) NSString endpointUID;
@property (nonatomic) NSString outputDeviceUID;
- (float)volume;
- (id)outputDeviceUID;
- (unsigned long long)type;
- (id)endpointUID;
- (id)initWithVolume:endpointUID:outputDeviceUID:;
@end
