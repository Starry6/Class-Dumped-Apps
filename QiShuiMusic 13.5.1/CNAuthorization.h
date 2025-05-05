@interface CNAuthorization : NSObject
@property (nonatomic) CNAuthorizationContext authorizationContext;
- (id)initWithAuthorizationContext:;
- (BOOL)requestAccessForEntityType:error:;
- (void)requestAccessForEntityType:completionHandler:;
- (id)init;
- (id)authorizationContext;
- (long long)authorizationStatusForEntityType:;
- (void).cxx_destruct;
- (id)initWithAssumedIdentity:;
- (BOOL)isAccessRestrictedForEntityType:;
+ (id)logger;
@end
