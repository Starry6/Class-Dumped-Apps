@interface AWEPlayVideoRecorder : NSObject
@property (nonatomic) NSPointerArray players;
@property (nonatomic) BOOL enableRecord;
- (id)currentPlayVideoViewController;
- (BOOL)enableRecord;
- (id)currentPlayerList;
- (void)setEnableRecord:;
- (id)currentInWindowPlayerList;
- (id)init;
- (void)removePlayer:;
- (void).cxx_destruct;
- (id)players;
- (void)addPlayer:;
- (void)setPlayers:;
+ (id)sharedInstance;
@end
