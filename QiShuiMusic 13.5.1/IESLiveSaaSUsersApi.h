@interface IESLiveSaaSUsersApi : HTSLiveApi
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
- (void)fetchUsers:count:isRefresh:finished:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (id)initWithRoom:;
@end
