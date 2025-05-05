@interface IESLiveDanmakuMonitor : NSObject
@property (nonatomic) NSMutableArray receivedImportantDanmaku;
@property (nonatomic) NSMutableSet danmakuDisableReasons;
@property (nonatomic) NSMutableSet danmakuLandscapeDisableReasons;
@property (nonatomic) q discardCount;
@property (nonatomic) q createFailedCount;
@property (nonatomic) q filterCount;
- (void)reportDanmakuErrorDataStatistic;
- (void)setFilterCount:;
- (long long)createFailedCount;
- (id)danmakuDisableReasons;
- (id)danmakuLandscapeDisableReasons;
- (long long)discardCount;
- (id)importantDanmakuMessageClass;
- (void)monitorAddDanmakuMessageIfNeeded:;
- (id)receivedImportantDanmaku;
- (void)reportDanmakuContainerPositionErrorWithPosition:;
- (void)reportErrorStateImportantDanmakuMessages;
- (void)reportOnDanmakuUnmount;
- (void)setCreateFailedCount:;
- (void)setDanmakuDisableReasons:;
- (void)setDanmakuLandscapeDisableReasons:;
- (void)setDiscardCount:;
- (void)setReceivedImportantDanmaku:;
- (id)init;
- (void).cxx_destruct;
- (long long)filterCount;
@end
