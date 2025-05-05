@interface NSURLAuthenticationChallenge : NSObject
@property (nonatomic) NSURLProtectionSpace protectionSpace;
@property (nonatomic) NSURLCredential proposedCredential;
@property (nonatomic) q previousFailureCount;
@property (nonatomic) NSURLResponse failureResponse;
@property (nonatomic) NSError error;
@property (nonatomic) <NSURLAuthenticationChallengeSender> sender;
- (id)init;
- (void)dealloc;
- (id)sender;
- (id)_initWithListOfProtectionSpaces:CurrentProtectionSpace:proposedCredential:previousFailureCount:failureResponse:error:sender:;
- (id)initWithProtectionSpace:proposedCredential:previousFailureCount:failureResponse:error:sender:;
- (id)protectionSpace;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithAuthenticationChallenge:sender:;
- (id)failureResponse;
- (long long)previousFailureCount;
- (id)_createCFAuthChallenge;
- (void)setSender:;
- (id)proposedCredential;
+ (BOOL)supportsSecureCoding;
+ (id)_authenticationChallengeForCFAuthChallenge:sender:;
+ (id)_createAuthenticationChallengeForCFAuthChallenge:sender:;
@end
