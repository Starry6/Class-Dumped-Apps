@interface TTAccountRefreshAccessTokenCommand : NSObject
@property (nonatomic) NSMutableDictionary requestTrackInfo;
@property (nonatomic) q authPlatform;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) <TTAccountAccessTokenUpdateCommandDelegate> delegate;
@property (nonatomic) @? completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_getOAuthToken;
- (void)setTrackParams:;
- (long long)authPlatform;
- (id)requestTrackInfo;
- (void)setAuthPlatform:;
- (void)setRequestTrackInfo:;
- (id)trackParams;
- (id)completion;
- (void)setCompletion:;
- (void)execute;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (BOOL)isEqual:;
@end
