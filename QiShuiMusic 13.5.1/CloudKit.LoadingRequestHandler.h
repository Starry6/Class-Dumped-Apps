@interface CloudKit.LoadingRequestHandler : NSObject
- (id)init;
- (BOOL)resourceLoader:shouldWaitForLoadingOfRequestedResource:;
- (void).cxx_destruct;
- (BOOL)resourceLoader:shouldWaitForRenewalOfRequestedResource:;
- (void)resourceLoader:didCancelLoadingRequest:;
- (BOOL)resourceLoader:shouldWaitForResponseToAuthenticationChallenge:;
- (void)resourceLoader:didCancelAuthenticationChallenge:;
@end
