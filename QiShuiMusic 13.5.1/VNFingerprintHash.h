@interface VNFingerprintHash : NSObject
@property (nonatomic) NSData booleanBytesData;
@property (nonatomic) NSData hashData;
@property (nonatomic) NSString hashString;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)hashString;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)hashData;
- (id)booleanBytesData;
- (id)initWithBooleanBytes:length:;
- (id)initWithBooleanBytesData:;
- (id)initWithHashData:;
+ (BOOL)supportsSecureCoding;
@end
