@interface AWEIMImageMessage : AWEIMMessage
@property (nonatomic) NSString uniqueId;
@property (nonatomic) AWEIMMessageImageContent content;
@property (nonatomic) UIImage forwardPreviewImage;
- (id)forwardPreviewImage;
- (id)getContent;
- (id)getContentDict;
- (id)getDisplaySizeOfMsg;
- (id)initWithContentDict:;
- (BOOL)isAttachmentAtLocal;
- (BOOL)isAttachmentAtRemote;
- (BOOL)isAttachmentMessage;
- (void)setForwardPreviewImage:;
- (void)updateWithMessage:;
- (id)content;
- (void)setContent:;
- (id)uniqueId;
- (void)setUniqueId:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
