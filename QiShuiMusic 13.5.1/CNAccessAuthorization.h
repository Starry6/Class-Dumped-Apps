@interface CNAccessAuthorization : NSObject
@property (nonatomic) CNAuthorizationContext authorizer;
- (void)performWork:authorizingFetchRequest:failureHandler:;
- (id)init;
- (BOOL)authorizeFetchRequest:accessError:;
- (id)authorizedKeysForContactKeys:;
- (id)initWithAuditToken:assumedIdentity:;
- (void).cxx_destruct;
- (id)initWithAuthorizer:;
- (id)initWithAuditToken:;
- (void)removeUnauthorizedKeysFromFetchRequest:;
- (id)authorizer;
+ (id)new;
+ (id)allAuthorizationKeys;
@end
