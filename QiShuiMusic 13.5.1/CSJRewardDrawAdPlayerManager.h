@interface CSJRewardDrawAdPlayerManager : NSObject
@property (nonatomic) NSMutableArray playersIdle;
@property (nonatomic) NSMutableArray playersUsing;
- (void)setPlayersIdle:;
- (void)deallocAllPlayers;
- (id)playersIdle;
- (id)playersUsing;
- (void)releasePlayer:;
- (void)setPlayersUsing:;
- (void).cxx_destruct;
- (id)playerWithPlayerItem:;
+ (id)sharedInstance;
@end
