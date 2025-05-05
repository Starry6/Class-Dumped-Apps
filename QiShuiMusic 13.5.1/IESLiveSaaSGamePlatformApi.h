@interface IESLiveSaaSGamePlatformApi : HTSLiveApi
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) NSNumber gameID;
@property (nonatomic) NSNumber playID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchGamingTipsWithCompletion:;
- (void)finishGameInform:isCutShort:;
- (id)initWithGameID:roomModel:;
- (id)playID;
- (id)roomModel;
- (void)setGameID:;
- (void)setPlayID:;
- (void)setRoomModel:;
- (void)startGameInformWithCompletionBlock:;
- (void)startGameInformWithExtraParameters:completionBlock:;
- (void).cxx_destruct;
- (id)gameID;
@end
