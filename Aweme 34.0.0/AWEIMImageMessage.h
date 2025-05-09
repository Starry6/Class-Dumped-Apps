@interface AWEIMImageMessage : AWEIMMessage
@property (nonatomic) NSString uniqueId;
@property (nonatomic) AWEIMMessageImageContent content;
@property (nonatomic) UIImage forwardPreviewImage;
@property (nonatomic) BOOL isFolding;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString parentMessageId;
@property (nonatomic) q innerMessageIndex;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)getContent;
- (id)getContentDict;
- (void)updateWithMessage:;
- (BOOL)isAttachmentAtLocal;
- (BOOL)isUserCellType;
- (id)makeFeedMediaDisplayModel;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (id)supportMessageMenuTypeList;
- (double)bubbleMaxHeight;
- (BOOL)showBubbleBorder;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isSupportForward;
- (id)hintOnInputVCWhenQuoted;
- (id)generateForwardMessage;
- (id)parentMessageId;
- (void)setParentMessageId:;
- (long long)innerMessageIndex;
- (void)setInnerMessageIndex:;
- (BOOL)isAttachmentAtRemote;
- (id)forwardPreviewImage;
- (void)setForwardPreviewImage:;
- (BOOL)isAllowedForward;
- (BOOL)isAttachmentMessage;
- (id)getDisplaySizeOfMsg;
- (BOOL)isFolding;
- (void)setIsFolding:;
- (id)largeImageAttachmentMessageExtKey;
- (id)longImageAttachmentMessageExtKey;
- (id)clipThumbnailImageAttachmentMessageExtKey;
- (id)imageAttachmentCacheKey;
- (id)longImageAttachmentCacheKey;
- (id)clipThumbnailImageAttachmentCacheKey;
- (id)imageAttachmentMessageExtKey;
- (id)content;
- (void)setUniqueId:;
- (id)uniqueId;
- (void)setContent:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (Class)viewModelClass;
@end
