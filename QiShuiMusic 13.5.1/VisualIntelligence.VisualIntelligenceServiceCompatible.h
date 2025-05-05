@interface VisualIntelligence.VisualIntelligenceServiceCompatible : NSObject
@property (nonatomic) _TtC18VisualIntelligence23OntologyGraphCompatible ontologyGraph;
- (id)init;
- (void).cxx_destruct;
- (id)ontologyGraph;
- (id)refineRegionsWithRequest:error:;
- (id)searchWithVisualQuery:completion:;
- (id)parseWithVisualQuery:completion:;
- (id)detectWithImage:regionOfInterest:error:;
- (id)initWithTimeoutInterval:;
- (id)parseCachedWithVisualQuery:cachedResults:completion:;
- (id)searchWithImage:visualUnderstanding:queryContext:completion:;
- (id)submitUserFeedbackWithUserFeedback:completion:;
- (id)pegasusPayloadDataWithImage:visualUnderstanding:queryContext:error:;
- (void)clearCacheWithCacheOption:;
+ (unsigned long long)parseFlowCacheVersion;
@end
