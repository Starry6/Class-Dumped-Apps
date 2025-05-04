@interface AWEIMShareLocationMessage : AWEIMMessage
@property (nonatomic) AWEIMLocationContent content;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)getContentDict;
- (void)updateWithMessage:;
- (BOOL)isAttachmentAtLocal;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (BOOL)isSupportForward;
- (BOOL)isAttachmentAtRemote;
- (BOOL)isAttachmentMessage;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
