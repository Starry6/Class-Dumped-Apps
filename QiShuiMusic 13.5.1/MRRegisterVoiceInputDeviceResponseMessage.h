@interface MRRegisterVoiceInputDeviceResponseMessage : MRProtocolMessage
@property (nonatomic) I deviceID;
@property (nonatomic) q errorCode;
- (long long)errorCode;
- (unsigned int)deviceID;
- (unsigned long long)type;
- (id)initWithDeviceID:errorCode:;
@end
