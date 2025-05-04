@interface AWELiveRoomGameCPModel : AWEBaseApiModel
@property (nonatomic) q isLiveAPromotedA;
@property (nonatomic) NSString gameId;
@property (nonatomic) NSString gameName;
@property (nonatomic) NSString promoteInstanceId;
- (id)gameName;
- (void)setGameName:;
- (void)setGameId:;
- (id)gameId;
- (void)setPromoteInstanceId:;
- (long long)isLiveAPromotedA;
- (id)promoteInstanceId;
- (void)setIsLiveAPromotedA:;
- (void).cxx_destruct;
@end
