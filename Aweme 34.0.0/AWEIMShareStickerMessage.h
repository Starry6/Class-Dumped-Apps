@interface AWEIMShareStickerMessage : AWEIMMessage
@property (nonatomic) AWEIMShareStickerContent content;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (BOOL)isSupportForward;
- (BOOL)isAllowedForward;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
