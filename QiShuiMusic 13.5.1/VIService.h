@interface VIService : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)ontologyGraph;
- (id)lookupTextWithQuery:completion:;
- (id)refineRegionsWithRequest:error:;
- (id)searchWithParsedVisualQuery:completion:;
- (id)searchWithVisualQuery:completion:;
- (void)clearCacheWithOption:;
- (id)submitUserFeedback:completion:;
- (id)parseWithVisualQuery:cachedResults:completion:;
- (id)initWithNetworkTimeoutInterval:;
- (id)parseWithVisualQuery:completion:;
- (id)parseWithVisualQuery:cachedResult:completion:;
- (id)pegasusPayloadWithParsedVisualQuery:error:;
- (id)detectWithImage:regionOfInterest:error:;
- (id)newStreamingSession;
+ (unsigned long long)parseFlowCacheVersion;
@end
