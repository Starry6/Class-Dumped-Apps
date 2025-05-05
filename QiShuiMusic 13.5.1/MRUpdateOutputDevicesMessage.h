@interface MRUpdateOutputDevicesMessage : MRProtocolMessage
@property (nonatomic) NSArray outputDevices;
- (id)outputDevices;
- (unsigned long long)type;
- (id)initWithOutputDevices:;
- (void).cxx_destruct;
@end
