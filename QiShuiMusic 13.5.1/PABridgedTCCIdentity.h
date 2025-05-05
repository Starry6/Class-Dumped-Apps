@interface PABridgedTCCIdentity : NSObject
@property (nonatomic) NSObject<OS_tcc_identity> identity;
- (id)identity;
- (id)initWithTCCIdentity:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
