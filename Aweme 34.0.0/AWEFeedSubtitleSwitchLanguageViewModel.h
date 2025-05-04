@interface AWEFeedSubtitleSwitchLanguageViewModel : NSObject
@property (nonatomic) NSArray sectionList;
@property (nonatomic) NSIndexPath selectedIndexPath;
- (id)cellModelWithIndexPath:;
- (void)configViewModel;
- (void)updateSelectedIndexPath:;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:;
- (void).cxx_destruct;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:;
- (void)setSectionList:;
- (id)sectionList;
@end
