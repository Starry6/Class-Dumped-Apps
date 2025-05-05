@interface MFSearchableIndexPersistence_iOS : EDSearchableIndexPersistence
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)attachmentItemMetadataForAttachmentID:messagePersistentID:name:mailboxID:result:;
- (id)messagesWhere:sortedBy:limit:;
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:;
- (id)_verificationDataFromMessage:messageIDTransactionIDDictionary:;
- (void)attachmentItemMetadataForAttachmentID:attachmentPersistentID:messagePersistentID:name:mailboxID:result:;
- (void)allMailboxIdentifiersForMessage:result:;
- (id)additionalFilterClause;
- (id)searchableIndexItemsFromMessages:type:;
+ (id)log;
@end
