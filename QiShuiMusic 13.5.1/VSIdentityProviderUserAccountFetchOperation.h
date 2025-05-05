@interface VSIdentityProviderUserAccountFetchOperation : VSAsyncOperation
@property (nonatomic) NSOperationQueue privateQueue;
@property (nonatomic) VSIdentityProvider provider;
@property (nonatomic) NSArray results;
@property (nonatomic) NSError error;
- (id)privateQueue;
- (void)setPrivateQueue:;
- (void)executionDidBegin;
- (void)setError:;
- (id)error;
- (id)provider;
- (id)results;
- (void).cxx_destruct;
- (void)setResults:;
- (id)initWithIdentityProvider:;
@end
