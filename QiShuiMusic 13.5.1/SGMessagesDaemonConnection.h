@interface SGMessagesDaemonConnection : NSObject
- (void)setManagerForTesting:;
- (void).cxx_destruct;
- (id)initWithDaemonConnectionFuture:;
- (id)remoteSuggestionManagerWithErrorHandler:;
@end
