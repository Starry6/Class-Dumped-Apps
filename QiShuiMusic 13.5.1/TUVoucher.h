@interface TUVoucher : NSObject
@property (nonatomic) NSData encryptedData;
@property (nonatomic) NSData unsafeData;
@property (nonatomic) NSData data;
@property (nonatomic) TUHandle handle;
@property (nonatomic) NSString tokenPrefixedURI;
- (id)data;
- (id)handle;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)encryptedData;
- (id)tokenPrefixedURI;
- (id)unsafeData;
- (id)initWithHandle:tokenPrefixedURI:data:encryptedData:;
- (id)initWithVoucher:;
- (BOOL)isEqualToVoucher:;
+ (BOOL)supportsSecureCoding;
@end
