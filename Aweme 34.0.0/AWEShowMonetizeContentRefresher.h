@interface AWEShowMonetizeContentRefresher : AWEShowMonetizeCommonRefresher
- (void)refreshMonetizeContentWithInfo:;
- (void)handleVeryHighPriorityMonetizeDataWithInfo:awemes:error:logID:;
- (void)requestNormalPriorityMonetizeData:refreshedMonetizeData:;
- (void)handleNormalMonetizeDataWithInfo:awemes:;
- (void)handleNormalMonetizeDataWithInfo:awemes:forMonetizeSceneContainers:;
@end
