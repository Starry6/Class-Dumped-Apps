@interface AWEIMVideoMessage : AWEIMMessage
@property (nonatomic) BOOL im_videoCaptionType;
@property (nonatomic) BOOL im_videoCaptionApproved;
@property (nonatomic) AWEIMEncryptedVideoContent videoContent;
@property (nonatomic) {CGSize=dd} coverSize;
@property (nonatomic) UIImage forwardPreviewImage;
- (id)coverSize;
- (id)forwardPreviewImage;
- (id)getContent;
- (id)getContentDict;
- (BOOL)im_videoCaptionApproved;
- (BOOL)im_videoCaptionType;
- (id)initWithContentDict:;
- (BOOL)isAttachmentAtLocal;
- (BOOL)isAttachmentAtRemote;
- (BOOL)isAttachmentMessage;
- (void)setForwardPreviewImage:;
- (void)setVideoContent:;
- (id)videoContent;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
