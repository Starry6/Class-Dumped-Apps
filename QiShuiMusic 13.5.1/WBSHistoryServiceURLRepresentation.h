@interface WBSHistoryServiceURLRepresentation : NSObject
@property (nonatomic) NSString urlString;
@property (nonatomic) NSData urlHash;
@property (nonatomic) NSData urlSalt;
- (id)urlString;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)urlHash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithURLString:;
- (id)urlSalt;
- (id)initWithURLHash:salt:;
+ (BOOL)supportsSecureCoding;
@end
