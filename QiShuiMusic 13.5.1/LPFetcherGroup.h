@interface LPFetcherGroup : NSObject
- (void)cancel;
- (void).cxx_destruct;
- (void)_completed;
- (id)initWithPolicy:configuration:description:completionHandler:;
- (void)_addFetcher:atIndex:;
- (void)appendFetcher:;
- (void)prependFetcher:;
- (unsigned long long)numberOfActiveFetches;
- (void)startFetchesIfNeeded;
- (void)doneAddingFetchers;
- (void)evaluateCompleteness;
- (id)_responsesRespectingPolicy;
@end
