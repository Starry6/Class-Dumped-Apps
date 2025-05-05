@interface ASCAuthorizationTrafficController : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)beginAuthorizationForApplicationIdentifier:withClearanceHandler:;
- (void)endAuthorizationForAppIdentifier:clearanceHandler:;
- (void)cancelAuthorizationForAppIdentifierIfNecessary:;
+ (id)sharedInstance;
@end
