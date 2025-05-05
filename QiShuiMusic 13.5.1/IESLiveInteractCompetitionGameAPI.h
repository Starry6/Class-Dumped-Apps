@interface IESLiveInteractCompetitionGameAPI : HTSLiveApi
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
- (id)initWithRoom:DIContext:;
- (void)setUser:asPerformerWithCallback:;
- (void)unsetPerformer:callback:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
