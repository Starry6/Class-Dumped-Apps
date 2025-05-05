@interface IESLiveSaaSAudienceGamePlatformStateService : NSObject
@property (nonatomic) NSHashTable hashTable;
@property (nonatomic) Q gameLaunchingState;
@property (nonatomic) Q gameInteractingState;
- (id)addGamePlatformStateSubscriber:;
- (unsigned long long)gameInteractingState;
- (unsigned long long)gameLaunchingState;
- (void)gamePlatformGameInteractStateDidChangeTo:extraInfo:;
- (void)gamePlatformLaunchingStateDidChangeTo:extraInfo:;
- (id)hashTable;
- (id)initWithDIContext:;
- (void)removeGamePlatformStateSubscriber:;
- (void)resetGamePlatformState;
- (void)setGameInteractingState:;
- (void)setGameLaunchingState:;
- (void)setHashTable:;
- (void).cxx_destruct;
@end
