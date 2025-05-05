@interface WiFiAwarePublisherDataSessionHandle : NSObject
@property (nonatomic) C datapathID;
@property (nonatomic) WiFiMACAddress initiatorDataAddress;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initiatorDataAddress;
- (unsigned char)datapathID;
- (id)initWithDatapathID:initiatorDataAddress:;
+ (BOOL)supportsSecureCoding;
@end
