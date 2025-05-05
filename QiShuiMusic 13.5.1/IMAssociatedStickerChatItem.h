@interface IMAssociatedStickerChatItem : IMAssociatedMessageChatItem
@property (nonatomic) NSString transferGUID;
- (void).cxx_destruct;
- (BOOL)canDelete;
- (id)description;
- (id)copyWithZone:;
- (id)transferGUID;
- (id)_initWithItem:sender:transferGUID:;
@end
