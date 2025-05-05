@interface SSDownloadAuthenticationSession : SSDownloadSession
@property (nonatomic) NSURLAuthenticationChallenge authenticationChallenge;
- (id)authenticationChallenge;
- (void)_finishWithType:credential:;
@end
