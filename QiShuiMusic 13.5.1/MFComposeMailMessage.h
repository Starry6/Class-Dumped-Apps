@interface MFComposeMailMessage : MFMailMessage
@property (nonatomic) EMMessage emailMessageRepresentation;
@property (nonatomic) EMMessageRepository messageRepository;
- (id)account;
- (void).cxx_destruct;
- (id)documentID;
- (void)markAsViewed;
- (void)markAsReplied;
- (void)markAsForwarded;
- (id)messageRepository;
- (id)emailMessageRepresentation;
- (void)setEmailMessageRepresentation:;
+ (id)legacyMessageWithMessage:mailboxUid:skipAttachmentDownload:;
+ (id)legacyMessageWithMessage:mailboxUid:;
@end
