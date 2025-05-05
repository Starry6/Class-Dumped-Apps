@interface WBQuickAuth : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)authorizeDidFinishWithResponseCode:info:;
- (id)fixedUrlStringFromURL:withSplitString:;
- (id)initWithAuthorizeRequest:;
- (void)request:didReceiveResponse:;
- (void)request:didReciveRedirectResponseWithURI:;
- (id)tokenFromKeyChain;
- (BOOL)load;
- (void)dealloc;
- (id)token;
- (void)test;
- (void)setToken:;
- (void)request:didFailWithError:;
- (void).cxx_destruct;
@end
