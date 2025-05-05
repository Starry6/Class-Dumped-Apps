@interface NRSecureDevicePropertyID : NSObject
- (id)init;
- (id)data;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPropertyString:;
+ (BOOL)supportsSecureCoding;
@end
