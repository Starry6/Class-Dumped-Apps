@interface AWESearchAlienatedTabTrackManager : NSObject
@property (nonatomic) NSMutableArray trackCache;
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) BOOL isReady;
- (void)sendEvent:params:;
- (id)commonParams;
- (void)setCommonParams:;
- (void)updateCommonParams:;
- (void)setTrackCache:;
- (void)sendCachedTrack;
- (void)sendEventIfReady:params:;
- (id)trackCache;
- (void)handleAlienatedTabReveice:;
- (void)handleAlienatedTabClick:extraParams:;
- (void)handleAlienatedTabShow:;
- (void)handleAlienatedTabShowFail:failType:;
- (id)failTypeStringWithFailType:;
- (id)init;
- (BOOL)isReady;
- (void).cxx_destruct;
- (void)reset;
- (void)setIsReady:;
@end
