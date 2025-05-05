@interface MRRegisterHIDDeviceResultMessage : MRProtocolMessage
@property (nonatomic) q errorCode;
@property (nonatomic) Q deviceIdentifier;
- (unsigned long long)deviceIdentifier;
- (long long)errorCode;
- (unsigned long long)type;
- (id)initWithErrorCode:deviceIdentifier:;
@end
