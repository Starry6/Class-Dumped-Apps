@interface AWELiveAuthorizationControllerProviderImpl : NSObject
@property (nonatomic) UIWindow authorizeWindow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)authorizeWindow;
- (void)showAuthorizeContentVCWithText:eventContext:completeBlock:;
- (void)showAuthorizeRelationVCWithText:eventContext:completeBlock:;
- (void)setAuthorizeWindow:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
