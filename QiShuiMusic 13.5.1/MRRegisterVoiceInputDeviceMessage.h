@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage
@property (nonatomic) MRVirtualVoiceInputDeviceDescriptor descriptor;
- (id)descriptor;
- (id)initWithDescriptor:;
- (unsigned long long)type;
- (void).cxx_destruct;
@end
