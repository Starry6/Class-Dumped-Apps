@interface AMSDelegateAuthenticateRequest : NSObject
@property (nonatomic) NSString challenge;
@property (nonatomic) NSString userAgent;
- (id)userAgent;
- (void)setChallenge:;
- (void)setUserAgent:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)challenge;
- (id)initWithChallenge:userAgent:;
+ (BOOL)supportsSecureCoding;
+ (id)preferredUserAgent;
@end
