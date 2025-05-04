@interface AWEFeedSubtitleSettingsViewModel : NSObject
@property (nonatomic) NSMutableArray sectionList;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) <AWEFeedSubtitleSettingsTableViewDelegate> tableViewDelegate;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)updateWithAwemeModel:;
- (void)setTableViewDelegate:;
- (id)cellModelWithIndexPath:;
- (id)switchModel;
- (void)reloadCellModelWithIdentifier:;
- (id)languageChangedModel;
- (id)tableViewDelegate;
- (id)indexPathForContent:;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:;
- (void).cxx_destruct;
- (void)setSectionList:;
- (id)sectionList;
@end
