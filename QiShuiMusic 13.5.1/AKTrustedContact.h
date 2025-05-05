@interface AKTrustedContact : NSObject
@property (nonatomic) NSUUID uuid;
@property (nonatomic) q status;
@property (nonatomic) NSString hashedWrappingKeyRKC;
- (void)setStatus:;
- (id)uuid;
- (void)setUuid:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)status;
- (id)copyWithZone:;
- (id)initWithUUID:status:;
- (id)hashedWrappingKeyRKC;
- (void)setHashedWrappingKeyRKC:;
+ (BOOL)supportsSecureCoding;
@end
