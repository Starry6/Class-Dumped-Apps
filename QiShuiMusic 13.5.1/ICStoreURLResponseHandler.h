@interface ICStoreURLResponseHandler : ICURLResponseHandler
- (void)_performAuthenticationForResponse:toRequest:completionHandler:;
- (void)processInitialResponse:toRequest:withCompletionHandler:;
- (void)processCompletedResponse:toRequest:withCompletionHandler:;
- (void)_processDialogResponse:toRequest:completionHandler:;
- (void)_verifyMescalSignatureForResponse:toRequest:completionHandler:;
+ (void)_updateDefaultStorefrontIdentifier:usingIdentityStore:;
@end
