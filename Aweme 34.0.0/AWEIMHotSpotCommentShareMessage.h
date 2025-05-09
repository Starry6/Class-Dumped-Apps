@interface AWEIMHotSpotCommentShareMessage : AWEIMBaseCommentShareMessage
@property (nonatomic) NSString cardLevel;
@property (nonatomic) NSString hotSpotID;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hotSpotID;
- (id)getUniqueResourceId;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (void)setHotSpotID:;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (id)cardLevel;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isSupportForward;
- (id)hintOnInputVCWhenQuoted;
- (id)generateForwardMessage;
- (BOOL)im_commentAvailiable;
- (void)setCardLevel:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
@end
