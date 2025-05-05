@interface BDWebServerTrustChallengeModel : NSObject
@property (nonatomic) NSURLAuthenticationChallenge challenge;
@property (nonatomic) @? challengeCompletion;
@property (nonatomic) @? ttnetCompletion;
- (id)ttnetCompletion;
- (id)challengeCompletion;
- (void)setChallengeCompletion:;
- (void)setTtnetCompletion:;
- (void)setChallenge:;
- (void).cxx_destruct;
- (id)challenge;
@end
