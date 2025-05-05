@interface EDSearchableIndexPersistenceAttachmentDatum : NSObject
@property (nonatomic) NSString attachmentPersistentID;
@property (nonatomic) NSString messagePersistentID;
@property (nonatomic) NSString attachmentID;
@property (nonatomic) NSString name;
@property (nonatomic) q mailboxID;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (id)messagePersistentID;
- (long long)mailboxID;
- (void)setMailboxID:;
- (void)setMessagePersistentID:;
- (id)attachmentID;
- (void)setAttachmentID:;
- (id)attachmentPersistentID;
- (void)setAttachmentPersistentID:;
@end
