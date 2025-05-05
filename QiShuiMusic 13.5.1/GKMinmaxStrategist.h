@interface GKMinmaxStrategist : NSObject
@property (nonatomic) q maxLookAheadDepth;
@property (nonatomic) <GKGameModel> gameModel;
@property (nonatomic) <GKRandom> randomSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)randomSource;
- (void)setRandomSource:;
- (id)bestMoveForActivePlayer;
- (id)gameModel;
- (void)setGameModel:;
- (long long)maxLookAheadDepth;
- (void)setMaxLookAheadDepth:;
- (id)bestMoveForPlayer:;
- (id)randomMoveForPlayer:fromNumberOfBestMoves:;
@end
