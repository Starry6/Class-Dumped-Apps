@interface MRGetVolumeControlCapabilitiesMessage : MRProtocolMessage
@property (nonatomic) NSString outputDeviceUID;
- (id)initWithOutputDeviceUID:;
- (id)outputDeviceUID;
- (unsigned long long)type;
@end
