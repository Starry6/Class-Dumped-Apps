@interface AWEAboutDouyinSettingCellController : AWESettingsTableViewCellBaseController
@property (nonatomic) <AWEMRRecordJournalRow> badgeRecordToken;
@property (nonatomic) BOOL didTrackCellShow;
- (void)trackCellClick;
- (void)didBindItemModel;
- (void)recordBadgeShowIfNeeded;
- (void)trackCellShowIfNeeded;
- (void)recordBadgeConsumeIfNeeded;
- (id)badgeRecordToken;
- (void)setBadgeRecordToken:;
- (BOOL)didTrackCellShow;
- (void)setDidTrackCellShow:;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)willDisplayCell;
- (void)didSelectCell;
+ (id)detailTitle;
@end
