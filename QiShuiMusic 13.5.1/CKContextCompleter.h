@interface CKContextCompleter : NSObject
- (void)dealloc;
- (id)initWithResponse:;
- (void)discard;
- (void).cxx_destruct;
- (id)resultsMatching:;
- (id)_resultsMatching:;
- (id)resultsMatchingTags:;
- (id)queriesMatching:;
- (void)logResultsShown:serverOverride:;
- (void)logResultsShown:serverOverride:forInput:;
- (void)logEngagement:forInput:;
- (void)logEngagement:forInput:completion:;
- (void)logTransactionSuccessfulForInput:;
- (void)logTransactionSuccessfulForInput:completion:;
@end
