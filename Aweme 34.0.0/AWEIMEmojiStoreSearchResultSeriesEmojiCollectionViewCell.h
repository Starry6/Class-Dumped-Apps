@interface AWEIMEmojiStoreSearchResultSeriesEmojiCollectionViewCell : UICollectionViewCell
@property (nonatomic) UITableView seriesEmojiTableView;
@property (nonatomic) NSArray seriesEmojiDataSource;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (void)setTrackParams:;
- (void)emojiStoreCell:didClickAddPackage:;
- (void)setSeriesEmojiDataSource:;
- (id)seriesEmojiTableView;
- (id)seriesEmojiDataSource;
- (void)renderWithDataSource:;
- (void)setSeriesEmojiTableView:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupLayout;
@end
