@interface AWEPlayletPageContext : AWEPageContext
@property (nonatomic) NSMutableDictionary preloadDataDic;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSDictionary trackCommonParams;
@property (nonatomic) NSDictionary searchLogExtra;
@property (nonatomic) BOOL usePreloadFeedData;
@property (nonatomic) BOOL useLocalRevisitData;
@property (nonatomic) BOOL useLocalDiggData;
@property (nonatomic) BOOL usePreloadSkylightData;
@property (nonatomic) BOOL loadSkylightTimeout;
@property (nonatomic) NSMutableDictionary channelRefreshLogExtra;
@property (nonatomic) NSString firstOpenWay;
@property (nonatomic) NSString transferParams;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setSearchLogExtra:;
- (void)setTrackCommonParams:;
- (id)searchLogExtra;
- (id)trackCommonParams;
- (id)transferParams;
- (id)preLoadFeedData;
- (void)setUsePreloadFeedData:;
- (id)preloadSkylightData;
- (void)setUsePreloadSkylightData:;
- (long long)hasRecordPreLoadDataDuration;
- (void)setTransferParams:;
- (void)setUseLocalRevisitData:;
- (void)setUseLocalDiggData:;
- (BOOL)useLocalRevisitData;
- (BOOL)useLocalDiggData;
- (BOOL)loadSkylightTimeout;
- (id)channelRefreshLogExtra;
- (id)preloadDataDic;
- (void)recordPreLoadFeedData:;
- (void)recordPreloadSkylightData:;
- (BOOL)usePreloadFeedData;
- (BOOL)usePreloadSkylightData;
- (void)setLoadSkylightTimeout:;
- (void)setChannelRefreshLogExtra:;
- (id)firstOpenWay;
- (void)setFirstOpenWay:;
- (void)setPreloadDataDic:;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
@end
