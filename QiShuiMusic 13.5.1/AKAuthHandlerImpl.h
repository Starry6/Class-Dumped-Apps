@interface AKAuthHandlerImpl : NSObject
@property (nonatomic) BOOL forceSilentAuth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildReauthenticationContextFromContext:error:;
- (void)reauthenticateWithContext:completion:;
- (void)reauthenticateWithContext:completionWithResults:;
- (BOOL)forceSilentAuth;
- (void)setForceSilentAuth:;
@end
