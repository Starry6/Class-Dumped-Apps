@interface IESLiveSaaSSensitiveApi : HTSLiveApi
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
- (id)paramsWithRoom:;
- (id)initWithRoomId:;
- (void)addSensitiveWord:completion:;
- (void)delSensitiveWord:completion:;
- (void)getSensitiveWordCompletion:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
