@interface IESLiveComponentDynamicSyncConfig : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL levelEntrench;
@property (nonatomic) double overTime;
@property (nonatomic) NSDictionary taskMap;
@property (nonatomic) BOOL loadRankListWithNoDelay;
@property (nonatomic) BOOL animated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)levelEntrench;
- (BOOL)loadRankListWithNoDelay;
- (double)overTime;
- (void)setLevelEntrench:;
- (void)setLoadRankListWithNoDelay:;
- (void)setOverTime:;
- (BOOL)enable;
- (void)setAnimated:;
- (BOOL)animated;
- (id)taskMap;
- (void).cxx_destruct;
- (void)setTaskMap:;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
