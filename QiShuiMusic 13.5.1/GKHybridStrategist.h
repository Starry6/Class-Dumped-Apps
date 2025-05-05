@interface GKHybridStrategist : NSObject
@property (nonatomic) Q budget;
@property (nonatomic) Q explorationParameter;
@property (nonatomic) Q maxLookAheadDepth;
@property (nonatomic) <GKGameModel> gameModel;
@property (nonatomic) <GKRandom> randomSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (unsigned long long)budget;
- (void)dealloc;
- (void)setBudget:;
- (id)randomSource;
- (void)setRandomSource:;
- (id)bestMoveForActivePlayer;
- (id)gameModel;
- (void)setGameModel:;
- (unsigned long long)maxLookAheadDepth;
- (void)setMaxLookAheadDepth:;
- (unsigned long long)explorationParameter;
- (void)setExplorationParameter:;
- (BOOL)validateGameModel:;
- (BOOL)validateRandomSource;
@end
