@interface EDHeuristicsMailboxPredictor : NSObject
@property (nonatomic) <EMUserProfileProvider> userProfileProvider;
@property (nonatomic) <EDMailboxPredictionQueryAdapter> library;
@property (nonatomic) NSDictionary parameters;
@property (nonatomic) NSCache mailboxIDCache;
@property (nonatomic) NSMutableString debugLog;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userProfileProvider;
- (void)setLibrary:;
- (void)setUserProfileProvider:;
- (id)parameters;
- (id)library;
- (void).cxx_destruct;
- (void)setParameters:;
- (id)debugLog;
- (void)setDebugLog:;
- (id)predictMailboxIDsForMessages:limit:diagnostics:;
- (id)initWithUserProfileProvider:queryAdapter:;
- (id)initWithUserProfileProvider:queryAdapter:parameters:;
- (id)_mergeDefaultParameters:withParameters:;
- (BOOL)_modeParameterIs:;
- (id)_predictionsForMessage:limit:;
- (id)_orderedModePredictionForMessage:;
- (id)_summedWeightedPredictionsForMessage:limit:;
- (id)_weightedModePredictionsForMessage:;
- (id)_countsForField:message:;
- (BOOL)_limitToRecents;
- (id)_groupedMessagesCountByMailboxMatchingQuery:variable:;
- (id)_conversationIDCountsForMessage:;
- (id)_senderCountsForMessage:;
- (id)_listIDCountsForMessage:;
- (id)_recipientCountsForMessage:;
- (id)_userCreatedMailboxIDs;
- (id)_removeSpecialMailboxesInCounts:message:;
- (id)_topHitFromMailboxDictionary:;
- (id)_topHitFromMailboxDictionary:message:;
- (id)_objectWithMeasure:timesHigherThanFollowUpInMeasures:;
- (id)_normalizedTermFrequencyTopHitFromDictionary:withThreshold:;
- (BOOL)_isAllowedRecipient:;
- (id)_allowedRecipientsForMessage:;
- (id)mailboxIDCache;
- (void)setMailboxIDCache:;
@end
