@interface MRAVMutableDistantExternalDeviceMetadata : MRAVDistantExternalDeviceMetadata
@property (nonatomic) NSString name;
@property (nonatomic) NSString hostName;
@property (nonatomic) q hostPort;
@property (nonatomic) MRSupportedProtocolMessages supportedMessages;
@property (nonatomic) MRDeviceInfo deviceInfo;
@property (nonatomic) BOOL usingSystemPairing;
- (void)setDeviceInfo:;
- (void)setName:;
- (void)setHostName:;
- (void)setHostPort:;
- (void)setSupportedMessages:;
- (void)setUsingSystemPairing:;
@end
