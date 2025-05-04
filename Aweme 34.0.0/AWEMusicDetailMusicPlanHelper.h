@interface AWEMusicDetailMusicPlanHelper : AWEMusicDetailFeatureHelper
@property (nonatomic) AWEMusicActivityResourceInfo activityResourceInfo;
- (BOOL)entryFrequencyEnabledWithMusicActivityResourceInfo:;
- (void)entryFrequencyReloadWithMusicActivityResourceInfo:;
- (BOOL)shouldShowMusicPlanEntry:;
- (void)goToActivityPage;
- (void)trackShowMusicPlanEntryWithModel:activityResourceInfo:;
- (void)markEntryShow;
- (void)setActivityResourceInfo:;
- (BOOL)canShowMusicPlanEntryWith:;
- (BOOL)entryFrequencyEnabled;
- (id)musicDetailEntryFrequencyV2Config;
- (id)activityResourceInfo;
- (void)resetEntryFrequencyValueWithMusicActivityResourceInfo:;
- (void)resetEntryShowInfo;
- (void).cxx_destruct;
@end
