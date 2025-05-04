@interface AWEAwemeOfflinePlayedCheckManager : NSObject
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) q count;
@property (nonatomic) NSMutableSet playedVideoItemIDs;
- (void)playedItemIDArrayReport;
- (id)playedVideoItemIDs;
- (void)setPlayedVideoItemIDs:;
- (void)savePlayedVideoItemID:;
- (id)init;
- (void)setCount:;
- (void)setLock:;
- (id)lock;
- (long long)count;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
