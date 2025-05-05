@interface IESLiveSaaSAutoRefreshHelper : NSObject
@property (nonatomic) NSMutableDictionary refreshTimeStampDict;
@property (nonatomic) @? refreshBlock;
@property (nonatomic) double refreshInterval;
@property (nonatomic) BOOL needAutoRefresh;
- (BOOL)needAutoRefresh;
- (id)refreshTimeStampDict;
- (void)setNeedAutoRefresh:;
- (void)setRefreshTimeStampDict:;
- (void)triggerAutoRefreshWithParams:tabId:;
- (void)updateRefreshTimeWithTabId:;
- (id)init;
- (double)refreshInterval;
- (void).cxx_destruct;
- (void)setRefreshInterval:;
- (void)setRefreshBlock:;
- (id)refreshBlock;
+ (id)helperWithInterval:refreshBlock:;
@end
