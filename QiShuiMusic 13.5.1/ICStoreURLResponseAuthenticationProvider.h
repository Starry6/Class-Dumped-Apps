@interface ICStoreURLResponseAuthenticationProvider : ICURLResponseAuthenticationProvider
- (void)performAuthenticationToHandleResponse:toRequest:withCompletionHandler:;
- (void)performAuthenticationUsingRequestContext:withCompletionHandler:;
- (void)_performAuthenticationUsingRequestContext:usingVerificationInteractionLevel:withCompletionHandler:;
- (void)_adjustedAuthenticationPolicyForResponse:withCompletionHandler:;
+ (BOOL)supportsSecureCoding;
@end
