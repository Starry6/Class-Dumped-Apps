@interface IDSQueryKeyTransparencyContext : NSObject
@property (nonatomic) NSUUID ticket;
@property (nonatomic) NSData accountKey;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)ticket;
- (id)initWithTicket:accountKey:;
- (BOOL)isEqualToQueryKeyTransparencyContext:;
- (id)accountKey;
+ (BOOL)supportsSecureCoding;
@end
