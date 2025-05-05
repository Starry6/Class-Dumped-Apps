@interface MFMailDataMessageStore : MFDataMessageStore
@property (nonatomic) MailAccount account;
@property (nonatomic) MFMailboxUid mailboxUid;
@property (nonatomic) MFMailboxUid mailbox;
- (id)account;
- (id)mailbox;
- (BOOL)shouldDownloadBodyDataForMessage:;
- (id)storageLocationForAttachment:withMessage:;
- (id)storeData:forMimePart:isComplete:;
+ (Class)classForMimePart;
@end
