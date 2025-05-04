@interface AWEMusicChartModel : NSObject
@property (nonatomic) NSString cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) AWEMusicChartMusicModel music;
@property (nonatomic) NSMutableArray awemeList;
@property (nonatomic) NSMutableSet awemeIdSet;
@property (nonatomic) NSString startCursor;
@property (nonatomic) q lastAwemeIndex;
- (id)awemeList;
- (void)setAwemeList:;
- (id)awemeIdSet;
- (void)setAwemeIdSet:;
- (void)setStartCursor:;
- (long long)lastAwemeIndex;
- (void)setLastAwemeIndex:;
- (id)cursor;
- (void)setHasMore:;
- (id)music;
- (BOOL)hasMore;
- (void)setCursor:;
- (void)setMusic:;
- (void).cxx_destruct;
- (id)startCursor;
@end
