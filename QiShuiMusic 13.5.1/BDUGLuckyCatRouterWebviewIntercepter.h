@interface BDUGLuckyCatRouterWebviewIntercepter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandleUrl:;
- (BOOL)falconSchemeHandlerEnable:;
- (id)generateWebSecureLinkConfig:;
- (id)handleUrl:;
+ (long long)intercepterType;
+ (id)sharedInstance;
@end
