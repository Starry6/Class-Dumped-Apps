@interface AWEIMGameRoomInviteMessageV2 : AWEIMGameRoomInviteMessage
@property (nonatomic) Q roomStatusV2;
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
- (BOOL)shouldShowNicknameWithMessageType;
- (unsigned long long)roomStatusV2;
- (void)setRoomStatusV2:;
- (id)gameHint;
- (id)title;
- (long long)messageType;
- (id)copyWithZone:;
@end
