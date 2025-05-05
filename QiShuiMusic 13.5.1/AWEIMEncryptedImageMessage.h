@interface AWEIMEncryptedImageMessage : AWEIMMessage
@property (nonatomic) AWEIMEncryptedImageContent content;
@property (nonatomic) UIImage imageToUploadFromPlatform;
@property (nonatomic) UIImage forwardPreviewImage;
- (id)forwardPreviewImage;
- (id)getContent;
- (id)getContentDict;
- (id)getDisplaySizeOfMsg;
- (id)imageToUploadFromPlatform;
- (id)initWithContentDict:;
- (BOOL)isAttachmentAtLocal;
- (BOOL)isAttachmentAtRemote;
- (BOOL)isAttachmentMessage;
- (void)setForwardPreviewImage:;
- (void)setImageToUploadFromPlatform:;
- (void)updateWithMessage:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
