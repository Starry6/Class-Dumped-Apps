@interface AWEIMGroupInviteBubbleMessage : AWEIMMessage
@property (nonatomic) NSString userAvatar;
@property (nonatomic) NSString title;
@property (nonatomic) q groupCount;
@property (nonatomic) q groupMemberCount;
@property (nonatomic) q userID;
- (long long)aweType;
- (id)userAvatar;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (void)setGroupMemberCount:;
- (id)getSyncedExtDict;
- (void)setUserAvatar:;
- (long long)userID;
- (void).cxx_destruct;
- (id)title;
- (long long)messageType;
- (void)setTitle:;
- (long long)groupCount;
- (id)copyWithZone:;
- (void)setUserID:;
- (void)setGroupCount:;
- (long long)groupMemberCount;
@end
