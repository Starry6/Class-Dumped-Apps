@interface IDSKTVerificationResult : NSObject
@property (nonatomic) NSString uri;
@property (nonatomic) BOOL optedIn;
@property (nonatomic) NSArray verifiedPushTokens;
@property (nonatomic) NSArray unverifiedPushTokens;
@property (nonatomic) NSArray endpointTransparencyStates;
- (id)uri;
- (id)initWithCoder:;
- (BOOL)optedIn;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setUri:;
- (void)setOptedIn:;
- (id)verifiedPushTokens;
- (void)setVerifiedPushTokens:;
- (id)unverifiedPushTokens;
- (void)setUnverifiedPushTokens:;
- (id)endpointTransparencyStates;
- (void)setEndpointTransparencyStates:;
+ (BOOL)supportsSecureCoding;
@end
