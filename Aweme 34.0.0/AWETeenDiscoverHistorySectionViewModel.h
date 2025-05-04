@interface AWETeenDiscoverHistorySectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) {UIEdgeInsets=dddd} inset;
@property (nonatomic) AWETeenDiscoverChannelContext context;
@property (nonatomic) NSString columnTitle;
@property (nonatomic) NSString columnID;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)setColumnTitle:;
- (id)columnTitle;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)inset;
- (void)setInset:;
- (id)columnID;
- (void)setColumnID:;
+ (id)viewModelWithBlockData:;
@end
