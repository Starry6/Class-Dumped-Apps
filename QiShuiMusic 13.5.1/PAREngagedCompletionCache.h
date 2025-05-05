@interface PAREngagedCompletionCache : NSObject
- (void)addCompletion:forInput:;
- (void)addEngagedResults:;
- (void)topEngagedResultsForInput:maxAmount:completion:;
- (void)updateParametersForSmartSearchV1:smartSearchV2:;
- (void)clearEngagementsWithTitle:type:;
- (void)clearEngagementsFromDate:toDate:;
- (void)clearCompletionsFromDate:toDate:;
- (void)clearAllCompletions;
- (void)clearAllEngagements;
- (void)clearEngagementsWithTitle:;
+ (id)sharedInstance;
@end
