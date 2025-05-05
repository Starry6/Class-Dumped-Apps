@interface ICMusicKitURLResponseHandler : ICURLResponseHandler
- (void)_invalidateDeveloperTokenForInitialResponse:toRequest:withCompletionHandler:;
- (void)processInitialResponse:toRequest:withCompletionHandler:;
- (void)processCompletedResponse:toRequest:withCompletionHandler:;
- (void)_updateRequest:forProcessedResponseOfStoreURLRequest:;
- (void)_invalidateUserTokenForInitialResponse:toRequest:withCompletionHandler:;
@end
