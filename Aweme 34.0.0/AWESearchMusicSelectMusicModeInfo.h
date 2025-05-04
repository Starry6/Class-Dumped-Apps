@interface AWESearchMusicSelectMusicModeInfo : NSObject
@property (nonatomic) NSMutableArray selectMusicsArray;
@property (nonatomic) NSString correctName;
@property (nonatomic) AWESearchCorrectModel correctModel;
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> currentRootModel;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
- (id)logPassback;
- (void)setLogPassback:;
- (id)correctName;
- (void)setCorrectName:;
- (id)correctModel;
- (void)setCorrectModel:;
- (void)setCurrentRootModel:;
- (id)currentRootModel;
- (id)selectMusicsArray;
- (void)setSelectMusicsArray:;
- (id)cursor;
- (id)init;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
@end
