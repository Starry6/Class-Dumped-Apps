@interface PSOAuthAccountRedirectURLController : NSObject
@property (nonatomic) NSMapTable redirectHandlerMap;
- (id)init;
- (void).cxx_destruct;
- (void)registerOAuthClientForRedirectURL:redirectHandler:;
- (void)unRegisterOAuthClientForRedirectURL:;
- (BOOL)handleOAuthRedirectURL:;
- (id)_redirectURLFromURL:;
- (id)redirectHandlerMap;
- (void)setRedirectHandlerMap:;
+ (id)sharedInstance;
@end
