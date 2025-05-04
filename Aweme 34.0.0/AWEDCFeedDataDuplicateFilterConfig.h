@interface AWEDCFeedDataDuplicateFilterConfig : AWEDCFeedBaseConfig
@property (nonatomic) @? customFilterLevelBlock;
@property (nonatomic) @? onDidFilterBlock;
@property (nonatomic) BOOL refreshNeedReset;
@property (nonatomic) NSSet excludeAwemeType;
- (void)setCustomFilterLevelBlock:;
- (void)setOnDidFilterBlock:;
- (void)setupDefaultConfig;
- (void)setExcludeAwemeType:;
- (id)customFilterLevelBlock;
- (id)onDidFilterBlock;
- (BOOL)refreshNeedReset;
- (void)setRefreshNeedReset:;
- (id)excludeAwemeType;
- (void).cxx_destruct;
@end
