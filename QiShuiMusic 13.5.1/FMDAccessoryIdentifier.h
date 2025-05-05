@interface FMDAccessoryIdentifier : NSObject
@property (nonatomic) NSString string;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL valid;
- (id)string;
- (id)initWithString:;
- (void)setString:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)stringValue;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithAddress:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)encodeWithFMDCoder:error:;
- (id)initWithFMDCoder:error:;
- (id)computeAccessoryIdentifierWithAddress:;
- (id)initWithDeviceVendor:deviceProductId:;
+ (BOOL)supportsSecureCoding;
@end
