@interface AuthenticationServicesCore.ASCABLEAuthenticator : NSObject
- (id)init;
- (void)dealloc;
- (void)startWithCompletionHandler:;
- (void).cxx_destruct;
- (id)initWithCaBLEURL:error:;
- (void)finishTransactionWithCredential:error:;
@end
