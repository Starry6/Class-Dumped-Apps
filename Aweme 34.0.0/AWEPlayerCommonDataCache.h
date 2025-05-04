@interface AWEPlayerCommonDataCache : NSObject
@property (nonatomic) NSMapTable weakPlayerInfo;
@property (nonatomic) NSMapTable weakPreloaderInfo;
- (id)getPlayerData:;
- (BOOL)setPlayerData:key:;
- (BOOL)setPreloadData:key:;
- (id)getPreloadData:;
- (id)weakPlayerInfo;
- (void)setWeakPlayerInfo:;
- (id)weakPreloaderInfo;
- (void)setWeakPreloaderInfo:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
