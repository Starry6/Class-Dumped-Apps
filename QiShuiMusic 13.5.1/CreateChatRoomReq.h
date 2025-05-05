@interface CreateChatRoomReq : BaseReq
@property (nonatomic) NSString groupId;
@property (nonatomic) NSString chatRoomName;
@property (nonatomic) NSString chatRoomNickName;
@property (nonatomic) NSString extMsg;
- (id)chatRoomName;
- (id)chatRoomNickName;
- (id)extMsg;
- (void)setChatRoomName:;
- (void)setChatRoomNickName:;
- (void)setExtMsg:;
- (id)groupId;
- (void).cxx_destruct;
- (void)setGroupId:;
@end
