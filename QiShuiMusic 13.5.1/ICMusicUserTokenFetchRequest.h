@interface ICMusicUserTokenFetchRequest : ICRemoteRequestOperation
- (void)execute;
- (id)initWithCoder:;
- (void)performRequestWithResponseHandler:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithDeveloperToken:clientInfo:options:;
- (void)performRequestOnOperationQueue:withResponseHandler:;
- (void)_executeByPerformingStoreRequestWithContext:qualityOfService:;
+ (BOOL)supportsSecureCoding;
@end
