@interface MRDeviceInfoMessage : MRProtocolMessage
@property (nonatomic) MRDeviceInfo deviceInfo;
@property (nonatomic) MRSupportedProtocolMessages supportedProtocolMessages;
- (id)deviceInfo;
- (unsigned long long)type;
- (void).cxx_destruct;
- (unsigned long long)encryptionType;
- (id)initWithDeviceInfo:;
- (id)supportedProtocolMessages;
@end
