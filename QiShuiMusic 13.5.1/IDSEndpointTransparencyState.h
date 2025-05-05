@interface IDSEndpointTransparencyState : NSObject
@property (nonatomic) NSData pushToken;
@property (nonatomic) q verificationState;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)pushToken;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPushToken:verificationState:;
- (BOOL)isEqualToEndpointTransparencyState:;
- (long long)verificationState;
+ (BOOL)supportsSecureCoding;
@end
