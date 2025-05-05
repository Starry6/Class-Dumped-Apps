@interface MRSetVolumeMessage : MRProtocolMessage
@property (nonatomic) NSString outputDeviceUID;
@property (nonatomic) float volume;
- (float)volume;
- (id)outputDeviceUID;
- (unsigned long long)type;
- (id)initWithVolume:;
- (id)initWithVolume:outputDeviceUID:;
@end
