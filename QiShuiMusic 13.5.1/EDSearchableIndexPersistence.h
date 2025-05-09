@interface EDSearchableIndexPersistence : NSObject
@property (nonatomic) <EDSearchableIndexHookResponder> hookResponder;
@property (nonatomic) EDMessagePersistence messagePersistence;
@property (nonatomic) EDRichLinkPersistence richLinkPersistence;
@property (nonatomic) q lastProcessedAttachmentID;
@property (nonatomic) Q rebuildIndexState;
@property (nonatomic) EDPersistenceDatabase database;
@property (nonatomic) NSString additionalFilterClause;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q signpostID;
- (unsigned long long)signpostID;
- (void)attachmentItemMetadataForAttachmentID:messagePersistentID:name:mailboxID:result:;
- (id)richLinkPersistence;
- (id)messagesWhere:sortedBy:limit:;
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:;
- (id)initWithDatabase:messagePersistence:richLinkPersistence:hookResponder:;
- (void).cxx_destruct;
- (id)hookResponder;
- (id)database;
- (void)attachmentItemMetadataForAttachmentID:attachmentPersistentID:messagePersistentID:name:mailboxID:result:;
- (void)allMailboxIdentifiersForMessage:result:;
- (id)additionalFilterClause;
- (id)messagePersistence;
- (id)searchableIndexItemsFromMessages:type:;
- (unsigned long long)rebuildIndexState;
- (void)searchableIndex:prepareToIndexAttachmentsForMessageWithIdentifier:;
- (id)updatesForSearchableIndex:excludingIdentifiers:count:cancelationToken:;
- (long long)indexingTypeForSearchableIndex:item:;
- (void)searchableIndex:assignIndexingType:forIdentifiers:;
- (void)searchableIndex:willRemoveIdentifiers:type:;
- (id)childIdentifiersToRemoveFromSearchableIndex:whenRemovingParentIdentifiers:;
- (id)searchableIndex:assignTransaction:updates:;
- (void)searchableIndex:invalidateItemsGreaterThanTransaction:;
- (id)searchableIndex:invalidateItemsInTransactions:;
- (id)verificationDataSamplesForSearchableIndex:count:lastVerifiedMessageID:;
- (id)distinctTransactionIDsForSearchableIndex:;
- (void)clearOrphanedSearchableMessagesFromDatabase;
- (id)searchableIndex:attachmentItemsForMessageWithIdentifier:;
- (long long)lastProcessedAttachmentID;
- (void)setLastProcessedAttachmentID:;
- (id)_messagesRequiringIndexingForType:excludingIdentifiers:limit:;
- (BOOL)_canPerformIncrementalIndexForIdentifier:indexingType:;
- (id)_searchableIndexMessageIndexingTypes;
- (id)_assignIndexedItems:connection:query:indexedBindingsGenerator:;
- (id)_assignIndexedItems:transaction:connection:;
- (void)_addTombstonesForIdentifiers:type:connection:;
- (void)_assignTombstonesForIdentifiers:type:transaction:connection:;
- (void)_purgeSpotlightTombstonesBeforeTransaction:connection:;
- (id)_identifiersForTombstonesOfType:connection:;
- (void)_removeIndexedIdentifiers:connection:;
- (id)_identifiersForRemovedItemsUsingConnection:;
- (id)_identifiersForDeletedMessagesUsingConnection:;
- (id)_messageIDTransactionIDDictionaryToVerifyUsingConnection:count:lastVerifiedMessageID:;
- (id)_attachmentDataForItemsRequiringIndexingExcludingIdentifiers:limit:cancelationToken:connection:;
- (id)_attachmentDataForMessageWithIdentifier:connection:;
- (id)_attachmentItemsFromAttachmentData:limit:cancelationToken:;
- (id)_identifiersForDeletedAttachmentsUsingConnection:;
- (id)_identifiersForAttachmentsInTransactions:usingConnection:;
- (id)_identifiersForAttachmentsWithQuery:usingConnection:;
- (id)_richLinkDataForItemsRequiringIndexingExcludingIdentifiers:limit:cancelationToken:connection:;
- (id)_richLinkItemsFromRichLinkData:limit:cancelationToken:;
- (void)searchableRichLinkItemMetadataForRichLinkID:richLinkItemIdentifier:messagePersistentID:mailboxID:title:url:result:;
- (id)_assignIndexedAttachmentItems:transaction:connection:;
- (id)_assignIndexedRichLinkItems:transaction:connection:;
- (void)_assignIndexedDataDetectionItems:transaction:connection:;
- (void)_addSearchableDataDetectionResults:withMessage:transaction:;
- (void)setRebuildIndexState:;
+ (id)searchableDataDetectionResultsTableSchema;
+ (id)log;
+ (id)searchableMessagesTableName;
+ (id)signpostLog;
+ (id)searchableMessageTombstonesTableSchema;
+ (id)searchableAttachmentsTableSchema;
+ (id)tablesAndForeignKeysToResolve:associationsToResolve:;
+ (id)searchableRichLinksTableSchema;
+ (id)searchableMessagesTableSchema;
+ (id)searchableRebuildTableSchema;
@end
