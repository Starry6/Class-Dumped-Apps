@interface MRGetVolumeMessage : MRProtocolMessage
@property (nonatomic) NSString outputDeviceUID;
- (id)init;
- (id)initWithOutputDeviceUID:;
- (id)outputDeviceUID;
- (unsigned long long)type;
@end
