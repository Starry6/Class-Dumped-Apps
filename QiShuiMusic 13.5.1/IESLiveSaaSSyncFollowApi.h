@interface IESLiveSaaSSyncFollowApi : HTSLiveApi
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
- (id)roomModel;
- (void)setRoomModel:;
- (void)syncHostFollowWithRoomId:completion:;
- (void).cxx_destruct;
- (id)initWithRoom:;
@end
