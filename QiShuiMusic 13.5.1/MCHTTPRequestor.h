@interface MCHTTPRequestor : NSObject
@property (nonatomic) NSString username;
@property (nonatomic) NSString password;
@property (nonatomic) NSArray anchorCertificates;
@property (nonatomic) @ selfReference;
@property (nonatomic) BOOL didFailDueToMissingCredentials;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPassword:;
- (void)URLSession:task:didReceiveChallenge:completionHandler:;
- (id)username;
- (id)password;
- (void)setUsername:;
- (void).cxx_destruct;
- (void)startWithRequest:username:password:anchorCertificates:completionBlock:;
- (id)anchorCertificates;
- (void)setAnchorCertificates:;
- (id)selfReference;
- (void)setSelfReference:;
- (BOOL)didFailDueToMissingCredentials;
- (void)setDidFailDueToMissingCredentials:;
@end
