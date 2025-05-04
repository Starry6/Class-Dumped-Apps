@interface AWEVersionUpdateSettingCellController : AWESettingsTableViewCellBaseController
@property (nonatomic) <AWEMRRecordJournalRow> badgeRecordToken;
- (void)trackCellClick;
- (void)didBindItemModel;
- (void)recordBadgeShowIfNeeded;
- (void)recordBadgeConsumeIfNeeded;
- (id)badgeRecordToken;
- (void)setBadgeRecordToken:;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)willDisplayCell;
- (void)didSelectCell;
+ (id)generateSettingItemModel;
+ (id)versionUpdateCellDetail;
+ (id)versionUpdateCellTitle;
@end
