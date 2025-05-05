@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage
@property (nonatomic) NSArray deviceIDs;
@property (nonatomic) q errorCode;
- (id)deviceIDs;
- (long long)errorCode;
- (unsigned long long)type;
- (id)initWithDeviceIDs:errorCode:;
@end
