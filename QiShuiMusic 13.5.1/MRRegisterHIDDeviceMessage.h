@interface MRRegisterHIDDeviceMessage : MRProtocolMessage
@property (nonatomic) MRVirtualTouchDeviceDescriptor deviceDescriptor;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)deviceDescriptor;
- (id)initWithDeviceDescriptor:;
@end
