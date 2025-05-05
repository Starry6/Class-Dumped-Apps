@interface WiFiAwareDeviceCapabilities : NSObject
@property (nonatomic) NSNumber operatingChannel;
@property (nonatomic) NSNumber operatingClass;
@property (nonatomic) NSArray supportedCipherSuites;
@property (nonatomic) C supportedBands;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (unsigned char)supportedBands;
- (id)initWithOperatingChannel:operatingClass:supportedCipherSuites:supportedBands:;
- (id)operatingChannel;
- (id)operatingClass;
- (id)supportedCipherSuites;
+ (BOOL)supportsSecureCoding;
+ (id)currentDeviceCapabilities;
@end
