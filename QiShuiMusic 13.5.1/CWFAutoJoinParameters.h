@interface CWFAutoJoinParameters : NSObject
@property (nonatomic) q trigger;
@property (nonatomic) q mode;
@property (nonatomic) CWFNetworkProfile targetNetworkProfile;
- (void)setTrigger:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (long long)trigger;
- (BOOL)isEqualToAutoJoinParameters:;
- (void)encodeWithCoder:;
- (void)setTargetNetworkProfile:;
- (void).cxx_destruct;
- (id)targetNetworkProfile;
- (id)description;
- (long long)mode;
- (BOOL)isEqual:;
- (void)setMode:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
