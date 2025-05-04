@interface AWEIMEditMessageComponent : AWEIMComponentBase
@property (nonatomic) NSString currentEditingMsgID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didEditContent:mentionUsers:editedMessageID:;
- (BOOL)isMessageInEditing:;
- (void)didClickEditMessage:conversation:context:cell:;
- (void)didExitEditing;
- (id)p_messageBaseViewController;
- (void)didRestoreInputTextDraft:;
- (void)didExitCustomQuote:;
- (void)didClickCloseCustomQuoteBtn:;
- (void)willChangeToBlockState;
- (id)currentEditingMsgID;
- (BOOL)p_checkMsgEditCountLimit:showToast:;
- (BOOL)p_checkMsgEditTimeLimit:showToast:;
- (void)setCurrentEditingMsgID:;
- (BOOL)p_preventMessageListScroll:;
- (void)p_updateCellHighlight:isEditing:;
- (void)p_updateInputPlaceholder:;
- (void)p_updateCellHighlightForMessageID:isEditing:;
- (void)p_trackDidEditMessage:conversation:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
