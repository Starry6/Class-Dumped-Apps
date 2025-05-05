@interface HTSLiveSaaSDiggAPI : HTSLiveApi
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
- (void)iesDigg:finishBlock:;
- (void)iesGetDiggIconListWithFinish:;
- (id)roomModel;
- (void)setRoomModel:;
- (void).cxx_destruct;
- (id)initWithRoom:;
@end
