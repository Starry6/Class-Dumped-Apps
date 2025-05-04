@interface AWEOpenJSBridgeAuthManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)authManager:isAuthorizedMethod:forURL:;
- (void)authManager:isAuthorizedMethod:success:forURL:stage:list:;
- (id)init;
+ (void)trackAuthManger:isAuthorizedMethod:success:forURL:stage:list:;
@end
