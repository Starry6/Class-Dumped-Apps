@interface MRAVDistantExternalDeviceMetadata : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString hostName;
@property (nonatomic) q hostPort;
@property (nonatomic) MRDeviceInfo deviceInfo;
@property (nonatomic) MRSupportedProtocolMessages supportedMessages;
@property (nonatomic) BOOL usingSystemPairing;
- (id)deviceInfo;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (id)hostName;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (long long)hostPort;
- (id)supportedMessages;
- (BOOL)usingSystemPairing;
+ (BOOL)supportsSecureCoding;
@end
