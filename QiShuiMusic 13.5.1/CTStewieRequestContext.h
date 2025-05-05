@interface CTStewieRequestContext : NSObject
@property (nonatomic) q reason;
@property (nonatomic) NSData epki;
@property (nonatomic) NSData shared;
- (id)shared;
- (long long)reason;
- (id)initWithCoder:;
- (void)setReason:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setShared:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)epki;
- (void)setEpki:;
+ (BOOL)supportsSecureCoding;
@end
