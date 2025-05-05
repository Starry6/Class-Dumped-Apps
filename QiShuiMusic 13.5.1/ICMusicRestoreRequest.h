@interface ICMusicRestoreRequest : ICRequestOperation
- (void)execute;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithRequestContext:parameters:;
- (void)performRestoreRequestWithCompletionHandler:;
- (id)_serializedBodyDataWithAccountID:;
@end
