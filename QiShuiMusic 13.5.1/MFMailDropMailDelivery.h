@interface MFMailDropMailDelivery : MFOutgoingMessageDelivery
@property (nonatomic) NSArray attachments;
@property (nonatomic) EMMailDropMetadata imageArchiveMetadata;
@property (nonatomic) q mailDropState;
- (void).cxx_destruct;
- (void)setAttachments:;
- (id)attachments;
- (id)ckDatabase;
- (id)_attachmentManager;
- (id)deliverSynchronouslyWithCompletion:;
- (id)scaledImages:;
- (BOOL)updateMessageWithAttachmentsSynchronously;
- (long long)_processAttachments;
- (id)publishRecord:database:attachmentRecords:images:allowsCellularAccess:;
- (BOOL)_uploadAttachmentsViaCloudKit:zone:records:zippedPhotos:attachmentRecords:images:;
- (void)_recordZoneIDInDatabase:completionHandler:;
- (id)imageArchiveMetadata;
- (void)setImageArchiveMetadata:;
- (long long)mailDropState;
- (void)setMailDropState:;
+ (id)_mailDropZone;
@end
