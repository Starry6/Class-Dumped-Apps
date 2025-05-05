@interface JoinChatRoomReq : BaseReq
@property (nonatomic) NSString groupId;
@property (nonatomic) NSString chatRoomNickName;
@property (nonatomic) NSString extMsg;
- (id)chatRoomNickName;
- (id)extMsg;
- (void)setChatRoomNickName:;
- (void)setExtMsg:;
- (id)groupId;
- (void).cxx_destruct;
- (void)setGroupId:;
@end
