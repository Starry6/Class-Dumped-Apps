@interface AWEFeedVideoLocalLifeAnchorV2PrefetchUtils : NSObject
@property (nonatomic) AWEFeedVideoLocalLifeAnchorV2ViewContext viewContext;
@property (nonatomic) NSDictionary poiAnchorPreloadConfig;
@property (nonatomic) NSString poiPrefetchKey;
@property (nonatomic) BOOL hasRegisterSmartUnit;
- (void)updateViewContext:;
- (BOOL)enableSmartPreload;
- (id)initWithViewContext:;
- (BOOL)hasRegisterSmartUnit;
- (void)setHasRegisterSmartUnit:;
- (void)registerPrefetchPOIAnchorDetail;
- (BOOL)checkPrefecthPitayaPreLoadInfoWithPlayTime:;
- (BOOL)enablePitayaPreload;
- (BOOL)checkNeedPrefetchPOIAnchorDetail;
- (void)trackPrefetchEvent:params:;
- (void)doPOIAnchorDetailPrefetch;
- (id)poiAnchorPreloadConfig;
- (BOOL)checkPrefetchPOILocalLifePitayaPreloadInfo;
- (id)p_createFeedAnchorContext;
- (void)setPoiPrefetchKey:;
- (id)poiPrefetchKey;
- (void)prefetchPOIDetailWithPlayBackTime:;
- (void)clearPOIAnchorDetailPrefetch;
- (void)runPOILocalLifePitayaTask;
- (void)setPoiAnchorPreloadConfig:;
- (id)viewContext;
- (void)setViewContext:;
- (void).cxx_destruct;
@end
