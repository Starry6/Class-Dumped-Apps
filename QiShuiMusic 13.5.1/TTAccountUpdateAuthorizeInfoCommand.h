@interface TTAccountUpdateAuthorizeInfoCommand : NSObject
@property (nonatomic) q authPlatform;
@property (nonatomic) TTAccountAuthResponse authResp;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) <TTAccountAccessTokenUpdateCommandDelegate> delegate;
@property (nonatomic) @? completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTrackParams:;
- (long long)authPlatform;
- (id)authResp;
- (void)setAuthPlatform:;
- (void)setAuthResp:;
- (id)trackParams;
- (id)completion;
- (void)setCompletion:;
- (void)execute;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (BOOL)isEqual:;
@end
