@interface WapAuthHandler : NSObject
@property (nonatomic) <WXApiDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onHiddenLeftBar;
- (BOOL)beginWapAuth:currentVC:appId:delegate:;
- (void)cancelWapOAuth;
- (BOOL)endWapAuth;
- (id)getMobileCheckUrl;
- (id)getWebViewController;
- (BOOL)handleWapOAuthOpenUrl:;
- (void)onCancelOAuthWebView;
- (void)onShowLeftBar;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)parseURLParams:;
+ (id)shareWapAuthHandlerInstance;
@end
