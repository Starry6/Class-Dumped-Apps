@interface NWNetworkAdviceUpdate : NSObject
@property (nonatomic) q level;
@property (nonatomic) NSArray applications;
- (void)setLevel:;
- (long long)level;
- (void)setApplications:;
- (id)applications;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
