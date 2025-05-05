@interface PPContactStore : NSObject
@property (nonatomic) NSString clientIdentifier;
- (id)init;
- (id)_recordGenerator;
- (void)registerFeedback:completion:;
- (BOOL)iterContactNameRecordsForClient:error:block:;
- (id)upcomingRelevantContactsForQuery:error:;
- (void)_sendChangesToDelegates;
- (void).cxx_destruct;
- (BOOL)loadContactNameRecordsAndMonitorChangesWithDelegate:error:;
- (void)_loadContactNameRecordsWithDelegate:;
- (id)contactHandlesForSource:error:;
- (id)forwardingTargetForSelector:;
- (id)contactHandlesForTopics:error:;
- (BOOL)iterRankedContactsWithQuery:error:block:;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:chosenContactIdentifier:completion:;
@end
