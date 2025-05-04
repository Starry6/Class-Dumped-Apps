@interface AWEAwemePlayVideoManager : NSObject
@property (nonatomic) HMDMemoryMonitorRecord memoryRecord;
@property (nonatomic) NSPointerArray weakPlayersDidAppear;
@property (nonatomic) NSMutableSet playedItemIdSet;
- (void)videoPrefetch:didHitWithSize:;
- (void)videoPrefetch:didMissWithSize:;
- (void)userDidTakeScreenshot:;
- (void)setWeakPlayersDidAppear:;
- (void)addMemoryMonitor;
- (void)setMemoryRecord:;
- (id)memoryRecord;
- (id)weakPlayersDidAppear;
- (void)trackScreenShootWithPause:isPlayer:;
- (void)trackScreenShootWithPause:isPlayer:awemeModel:withLogExtra:;
- (id)playedItemIdSet;
- (id)getMemoryMonitorRecord;
- (void)updatePlayersWhenDidAppear:player:;
- (id)getPlayersDidAppear;
- (BOOL)isPlayedItemIdSetMore:;
- (void)recordPlayedItemID:;
- (void)setPlayedItemIdSet:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (void)setup;
@end
