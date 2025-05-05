@interface MFAttachmentCompositionContext : NSObject
@property (nonatomic) NSString contextID;
@property (nonatomic) NSURL attachmentsBaseURL;
@property (nonatomic) MFAttachmentManager attachmentsManager;
@property (nonatomic) NSArray attachments;
- (id)init;
- (void)dealloc;
- (id)contextID;
- (void).cxx_destruct;
- (id)attachments;
- (id)initWithContextID:;
- (void)setHostIdentifier:forAttachment:;
- (id)attachmentForHostIdentifier:;
- (id)attachmentsBaseURL;
- (void)setAttachmentsBaseURL:;
- (id)attachmentsManager;
- (void)setAttachmentsManager:;
@end
