@interface WiFiAwarePublishDatapathServiceSpecificInfo : NSObject
@property (nonatomic) q protocolType;
@property (nonatomic) S servicePort;
@property (nonatomic) NSString hostname;
- (id)hostname;
- (void)setHostname:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)protocolType;
- (id)initWithProtocolType:servicePort:;
- (unsigned short)servicePort;
- (BOOL)hostnameEquals:;
+ (BOOL)supportsSecureCoding;
@end
